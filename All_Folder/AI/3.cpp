#include<iostream>
using namespace std;

int decided_move; //variable the AI stores its thoughts in
int magic_square[]={2,7,6,9,5,1,4,3,8}; //flattened magic square 276
                                        //                       951
                                        //                       438
                                        //
                                        //all rows, columns, and diagonals
                                        //add to 15.

int player_one[6] = {0}; //Array of player numbers. Last index is a counter.
int player_two[6] = {0};


int has_won(int *c) {
    int i, j, k;                        //We test player victory with the magic
    for(i=0; i < c[5]; i++) {           //square. If the array belonging to that
        for(j=i+1; j < c[5]; j++) {     //player contains 3 numbers that sum to
            for(k=j+1; k < c[5]; k++) { //15, they have won. 
                if((c[i] + c[j] + c[k]==15) && 
                   (c[i] != 0) && 
                   (c[j] != 0) &&
                   (c[k] != 0)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int game_over() { //Returns true if the board is full or if a player has won
    return (player_one[5] + player_two[5]==9) ||
           has_won(player_one) ||
           has_won(player_two);
}

void move(int x,int c[]) {         //Deletes the value from magic_square
    c[c[5]] = magic_square[x];    //and adds it to the player's array
    c[5]++;
    magic_square[x] = 0;

}

void unmove(int x,int c[]) {   //Reverses the actions of move()
    c[5]--;
    magic_square[x] = c[c[5]];
    c[c[5]] = 0;
}

int search(int player) { //1 for player 1, -1 for player 2
    if(game_over()) {//If the game is over
        return player*(has_won(player_one)-  //Return 1 if the caller wins,
                       has_won(player_two)); //-1 if loss, 0 for a tie
    }
    int best_move;
    int best_score = -9;
    int q;
    for(q=0; q < 9; q++) { //Loop through all possible moves
        if(magic_square[q] != 0) { //If move not taken
            if(player == 1) {
                move(q, player_one);
            } else {
                move(q, player_two);
            }
            int score = -search(-player); //Minimax search
            if(player == 1) {
                unmove(q, player_one);
            } else {
                unmove(q, player_two);
            }
            if(score > best_score) { //If move produces a better score,
                best_score = score; //replace the old values
                best_move = q;
            }
        }
    }
    decided_move = best_move;
    return best_score;
}

int main() {
    while(!game_over()) {
        int x, y;
        cin >> x;
        cin >> y;
        int index = x*3 + y;
        if(!magic_square[index]) { //If occupied, try again
            continue;
        }
        move(index, player_one);
        if(game_over()) { //If player 1 has won or tied, quit
            break;
        }
        search(-1); //Do a search for player 2
        move(decided_move, player_two); //Make the decided move the search returned
        cout << ("%d %d\n",decided_move/3,decided_move%3)<<endl; //Print the coordinates
    }

    return 0;
}