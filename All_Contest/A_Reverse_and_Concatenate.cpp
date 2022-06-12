#include<bits/stdc++.h>
using namespace std;
#define ll long long

//rev(string s)
//{
//    reverse(s.begin(),s.end());
//    return s;
//}

//create rev(s) function which returns reverse of s
//  rev(string s)
// {
//     string rev="";
//     for(int i=s.length()-1;i>=0;i--)
//     {
//         rev+=s[i];
//     }
//     return rev;
// }



//create rev(s) function which returns reverse of s
//  rev(string s)
// {
//     string rev="";

// Function to reverse a string
// void reverseStr(string& str)
// {
//     int n = str.length();
  
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }



int main(){

int t;
cin>>t;
while(t--){

    int n;
    int k;
    cin>>n>>k;
    string s;
    cin>>s;

      string rev = string(s.rbegin(),s.rend());

  //   cout<<rev<<endl;


//create new string s+rev and store in set
 set<string> st;
for(int i=0;i<k;i++){
    string s1=s+rev;
    string s2=rev+s;
   
    st.insert(s1);
    st.insert(s2);
    // cout<<s1<<endl;
    //print set
    // for(auto it=st.begin();it!=st.end();it++){
    //     cout<<*it<<endl;
    // }
    //print size of set
    
}
//set is empty print 1
if(st.empty()){
    cout<<1<<endl;
}
else{
    //set is not empty print size of set
    cout<<st.size()<<endl;
}
 //cout<<st.size()<<endl;










   

    //create rev(s) function which returns reverse of s
    //  rev(string s)
    // {
    //     string rev="";















    //send s to rev(s) function
   // reverseStr(s);


    //print function output
   // cout<<s<<endl;

    
//store new string in set s1=s+reverse(s)
// unordered_set<string> s1;
// s1.insert(s+reverseStr(s));
//print s1
// for(auto it=s1.begin();it!=s1.end();it++)
// {
//    cout<<*it<<endl;
// }


   






























    //create rev(s) function which returns reverse of s
//    string  rev(string s)
//     {
//         string rev="";
//         for(int i=s.length()-1;i>=0;i--)
//         {
//             rev+=s[i];
//         }
//         return rev;
//     }


    //store new string in set s+rev(s)
    // set<string> st;
    // st.insert(s);
    // st.insert(rev(s));

    // //print all the strings in set
    // for(auto it=st.begin();it!=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    //print rev(s)
     //cout<<rev(s)<<endl;



    // string s1=s+reverse(s.begin(),s.end());
    // cout<<s1<<endl;
  //  reverse(s.begin(),s.end());



//     You can apply one of the two kinds of operations to the string:

//     replace the string s

// with s+rev(s)
// replace the string s
// with rev(s)+s
// where rev(s) is the reverse of the string s.
//do k number of operations 
//one time replace the string s with s+rev(s)
//store the string s in vector
//reverse the string s

//create a string s with s + reverse(s)
//store the string s in vector





    // vector<string> v;
    // v.push_back(s);
    // for(int i=0;i<k;i++){
    //     string temp=v[i];
    //     reverse(temp.begin(),temp.end());
    //     v.push_back(temp);
    // }

//one time replace the string s with rev(s)+s
















    //store all diiferent characters in a vector
    // vector<char> v;
    // for(int i=0;i<n;i++){
    //     if(find(v.begin(),v.end(),s[i])==v.end()){
    //         v.push_back(s[i]);
    //     }
    // }
    // int m=v.size();
    // int ans=n-m;
    // int ans1=k-ans;
    // if(k==0){
    //     cout<<"1"<<endl;
    // }
    // else if(n>k){
    //     cout<<k<<endl;
    // }
    // else{
    //     cout<<ans1<<endl;
    // }
  //  cout<<ans1<<endl;



}

    return 0;
}