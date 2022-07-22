#include <iostream> 
#include <iterator> 
#include <map> 

#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
  
using namespace std; 
  
int main() 
{ 
    fileio;
     map<int, int> marks; 
     marks.insert(pair<int, int>(160, 42)); 
     marks.insert(pair<int, int>(161, 30)); 
     marks.insert(pair<int, int>(162, 40)); 
     marks.insert(pair<int, int>(163, 50)); 
     marks.insert(pair<int, int>(164, 31)); 
     marks.insert(pair<int, int>(165, 12)); 
     marks.insert(pair<int, int>(166, 34)); 
  
     map<int, int>::iterator itr; 
     cout << "nThe map marks is : n"; 
     cout << "ROLL NO.tMarksn"; 
     for (itr =  marks.begin(); itr !=  marks.end(); ++itr) { 
        cout  << itr->first 
             << "t   t" << itr->second << 'n'; 
     } 
     cout << endl; 
     return 0;     
  }