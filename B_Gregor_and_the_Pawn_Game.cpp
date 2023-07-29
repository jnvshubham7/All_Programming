#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string enemy, gregor;
        cin >> enemy >> gregor;

        int max_pawns = 0;
        int num_pawns = 0;

        // Iterate through each cell from left to right
        for (int i = 0; i < n; i++) {
            if (gregor[i] == '1') {
                // If Gregor's pawn is in the current cell
                // Check if there is an enemy pawn in the corresponding cell in the enemy row
                if (enemy[i] == '1') {
                    max_pawns++;
                    enemy[i] = '0'; // Remove the enemy pawn
                } else if (i > 0 && enemy[i - 1] == '1') {
                    max_pawns++;
                    enemy[i - 1] = '0'; // Remove the enemy pawn diagonally up-left
                } else if (i < n - 1 && enemy[i + 1] == '1') {
                    max_pawns++;
                    enemy[i + 1] = '0'; // Remove the enemy pawn diagonally up-right
                } else {
                    num_pawns++; // Increment if Gregor's pawn is not blocked
                }
            }
        }

        // Add the remaining unpromoted pawns to the maximum count
        max_pawns += min(num_pawns, count(enemy.begin(), enemy.end(), '1'));
        cout << max_pawns << endl;
    }

    return 0;
}
