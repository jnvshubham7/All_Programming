#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int pos,res;
	    int flag1=-1;
	    int flag2=-1;
	    string str;
	    cin>>str;
	    for(int i=0;i<N-3;i++)
	    {
	        if(str[i]=='c' && str[i+1]=='o' && str[i+2]=='d' && str[i+3]=='e' && flag1 ==-1)
	        {
	            pos=i;
	            flag1=1;
	        }
	        if(str[i]=='c' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]=='f' && flag2 ==-1)
	        {
	            res=i;
	            flag2=1;
	        }
	    }
	    if(pos<res)
	    {
	        cout<<"AC"<<endl;
	    }
	    else{
	        cout<<"WA"<<endl;
	    }
	}
	return 0;
}






// #include <iostream> 
// #include <bits/stdc++.h> 
 
// using namespace std; 
 
// int isSubstring(string s1, string s2) 
// { 
//     int M = s1.length(); 
//     int N = s2.length(); 
  
//     /* A loop to slide pat[] one by one */ 
//     for (int i = 0; i <= N - M; i++) { 
//         int j; 
  
//         /* For current index i, check for 
//  pattern match */ 
//         for (j = 0; j < M; j++) 
//             if (s2[i + j] != s1[j]) 
//                 break; 
  
//         if (j == M) 
//             return i; 
//     } 
  
//     return -1; 
// } 
 
// int main(){ 
//     int t; 
//     cin>>t; 
//     while(t--){ 
//         int n; 
//         cin>>n; 
//         string s; 
//         cin>>s; 
//        string s1="code"; 
//        string s2="chef"; 
//         int res=isSubstring(s1,s); 
//         int res1=isSubstring(s2,s); 
//         if(res<res1 && res1!=-1 && res!=-1){ 
//             cout<<"AC"<<endl; 
//         }else{ 
//             cout<<"WA"<<endl; 
//         }} 
//     return 0; 
// }