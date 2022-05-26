#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool isPalindrome(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}




int main(){

ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    string s;
    cin>>s;


//     You are given a palindromic string s of length n

// .

// You have to count the number of indices i
// (1≤i≤n) such that the string after removing si from s

// still remains a palindrome.

// For example, consider s

// = "aba"

//     If we remove s1

// from s
// , the string becomes "ba" which is not a palindrome.
// If we remove s2
// from s
// , the string becomes "aa" which is a palindrome.
// If we remove s3
// from s, the string becomes "ab" which is not a palindrome. 


ll cnt=0;

//delete one char at a time and check if it is palindrome cnt++


for(int i=0;i<n;i++){
    string s1=s;
    s1.erase(i,1);

    if(isPalindrome(s1)){
        cnt++;
    }

    // if(s1==string(s1.rbegin(),s1.rend())){
    //     cnt++;
    // }
    // if(s1==s1.rbegin()){
    //     cnt++;
    // }

}


    cout<<cnt<<endl;






}

    return 0;
}