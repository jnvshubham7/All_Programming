#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
string s;
cin>>s;

//'(' and ')' count how many times occur in the string
int count_open=0;
int count_close=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        count_open++;
    }
    else if(s[i]==')'){
        count_close++;
    }
}
//print min
cout<<min(count_open,count_close)<<endl;



//check '(',')' at the begining and end of the string 
// int flag=0;
// if(s[0]=='(' && s[s.size()-1]==')'){
//     flag=1;
// }

//count the number of '(' and ')' simultaneously
//create two loop i++ and j-- and check '(' and ')' is present count++
// int n=s.size();
// int count=0;
// for(int i=0;i<n;i++){
//     for(int j=n-1;j>=0;j--){
//         if(s[i]=='(' && s[j]==')'){
//             count++;
//            // cout<<count<<endl;
//               i++;
//               j--;
//         }
//     }
// }

//     cout<<count<<endl;




    


    return 0;
}