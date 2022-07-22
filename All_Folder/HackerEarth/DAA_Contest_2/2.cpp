#include<bits/stdc++.h>
using namespace std;
void para(stack<char>& s,string str,int open, int close,int n)
{
	if(open == n  && close == n){
		cout<<str<<endl;
		return;
	}
	if(open < n)
	{
		para(s,str+'(',open+1,close,n);
	}
	if(open > close)
	{
		para(s,str + ')',open,close+1,n);
	}
}
int main()
{
	int n;
	cin>>n;
	stack<char> s;
	string str = "";
	para(s,str,0,0,n);
}





































// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){

// int n;
// cin>>n;



// //You are given an integer ‘N’, your task is to generate all combinations of well-formed parenthesis having ‘N’ pairs. You are task is to generate all possible valid sets of parenthesis that can be formed with a given number of pairs.

// //A parenthesis is called well-formed if it is balanced i.e. each left parenthesis has a matching right parenthesis and the matched pairs are well nested.


// // for(int i=0;i<n;i++){
// //     cout<<"(";

// // }
// // for(int i=0;i<n;i++){
// //     cout<<")";
// // }
// // cout<<endl;
// // for(int i=0;i<n/2;i++){
// //     for(int j=0;j<n;j++){
// //         cout<<"("<<")";
// //     }
// //     cout<<endl;
// // }


// //You are given an integer ‘n’, your task is to generate all combinations of well-formed parenthesis having ‘n’ pairs.
// //store all the possible combinations in a vector





//     return 0;
// }