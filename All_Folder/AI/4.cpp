#include <bits/stdc++.h>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;
char square[9] = {'0','1','2','3','4','5','6','7','8'};
 int magicSquare[9] = {8, 3, 4, 1, 5, 9, 6, 7, 2};


bool  hasWon(char player) {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                for (int k = 0; k < 9; k++)
                    if (i != j && i != k && j != k)
                        if (square[i] == player && square[j] == player && square[k] == player)
                            if (magicSquare[i] + magicSquare[j] + magicSquare[k] == 15)
                                return true;
        return false;
    }
    
    


int findloc(int loc)
{
    
    int t=(sizeof(magicSquare)/sizeof(*magicSquare));
    for(int i=0;i<t;i++)
    {
        if(magicSquare[i]==loc)
        {
            cout<<"\n"<<"block move at"<<"\t"<<i<<"\n";
         return i;
        }
    }
    return -1;
}

void mark(int player, int box)
{
	if (player == 1 )
	{
         if(square[box]!='X' && square[box]!='O')   
		square[box] = 'X';
		else 
		{
		 cout<<"Invalid move"<<"\n"<<"please try again";
		 int t;
		 cin>>t;
		 mark(1,t);
		}
	}
	else
	{
	    if(square[box]!='X' && square[box]!='O') 
	    	square[box] = 'O';
	    	else
	    	{
	    	    cout<<"Cpu chooses again previous move was Invalid"<<"\n";
	    	    int u=(rand() % 9);
	    	    mark(2,u);
	    	}
		
	}
}

void display()
{
		for(int i=0;i<9;i++)
		{
			cout<< square[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					cout<<"\n"; 
}
}

int blockopponent()
{
       int diff=0,val_move;
      for (int i = 0; i < 9; i++)
      {
            for (int j = 0; j < 9; j++)
            {
                     if (i != j )
                    {
                        if ((square[i] == 'X') && (square[j] == 'X'))
                        {
                              diff=15-(magicSquare[i]+magicSquare[j]);
                              cout<<"\n"<<"diffrence is"<<diff<<"\n";
                              if((diff>0) && (diff<=9) && (magicSquare[i]!=diff) && (magicSquare[j]!=diff))
                              {
                                  cout<<"test"<<"\n";
                                       val_move=findloc(diff);
                                       if(square[val_move]!='O')
                                       {
                                    	mark(2,val_move); 
                                    	 std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		                                 display();
                                    	return 1;
                                       }
                              }
                           //   else
                           //   return 0;
                        }
                       
                    }

            }
                
        }
      
      return 0;
    
}

int main()
{
      srand((unsigned) time(0));
    
		int player1 = 1, cpu =2 ; 
		int dec=-1;
		
		int box, result = 0, flag = 0;
			display();

		
		for(int i=1;i<5;i++)
	{

		cout<< "\n Player " << player1 <<" "<< "Enter your move"<<" ";
		cin>> box;
		mark( player1, box);
		display();

	
       if(hasWon('X')) 
       {
           cout<<"\n Congratulations! player " << player1 << " has Won ";
		 flag = 1;			
		 break;
           
       }
       else
       if(hasWon('O'))
       {
           cout<<"\n Congratulations!  Cpu  has Won ";
	    	flag = 1;			
		   break;
       }
       
		cout<< "\n"<< "Cpu turn"<<"\n";
		dec=blockopponent();
		cout<<"\n value is"<<dec<<"\n";
		if(dec==0)
		{
		 box=(rand() % 9);
		 mark(cpu, box);
		 std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		 display();
		}
	
	  if(hasWon('X')) 
       {
           cout<<"\n Congratulations! player " << player1 << " has Won ";
		 flag = 1;			
		 break;
           
       }
       else
       if(hasWon('O'))
       {
           cout<<"\n Congratulations!  Cpu  has Won ";
	    	flag = 1;			
		   break;
       }
	
	
   }
 

    if(flag!=1)
    {
 	cout<< "\n Player " << player1 <<" "<< "Enter your move "<<" ";
		cin>> box;
		mark( player1, box);
		display();

	
       if(hasWon('X')) 
       {
           cout<<"\n Congratulations! player " << player1 << " has Won ";
		 flag = 1;		
       }
       else
       if(hasWon('O'))
       {
           cout<<"\n Congratulations!  Cpu  has Won ";
	    	flag = 1;			
		   
       }
	
     }
		if (flag == 0 )
		cout<<" \n Sorry, The game is a draw ";
		
	
	return 0;
}
