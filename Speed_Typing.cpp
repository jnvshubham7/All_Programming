#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
for(int i=0;i<t;i++){

    string s1;
    cin>>s1;    
    string s2;
    cin>>s2;
    int n=s1.size();
    int m=s2.size();


    //check both string same char or not
   // bool flag=false;

   //store in set all char of s1 and s2
    

    set<char> s1_set;
    set<char> s2_set;

    for(int i=0;i<n;i++){
        s1_set.insert(s1[i]);
    }

    for(int i=0;i<m;i++){
        s2_set.insert(s2[i]);
    }

    //sort both set
    set<char>::iterator it1=s1_set.begin();
    set<char>::iterator it2=s2_set.begin();

    //store freq of each char in s1 and s2
    map<char,int> s1_map;
    map<char,int> s2_map;

    for(int i=0;i<n;i++){
        s1_map[s1[i]]++;
    }

    for(int i=0;i<m;i++){
        s2_map[s2[i]]++;
    }

    //ans == diff of freq of each char in s1 and s2
    int ans=0;

    while(it1!=s1_set.end()){
        //abs value
        ans+=abs(s1_map[*it1]-s2_map[*it1]);
        it1++;
    }

    // while(it2!=s2_set.end()){
    //     ans+=(s2_map[*it2]-s1_map[*it2]);
    //     it2++;
    // }

  //  cout<<ans<<endl;

// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and 
// y is the number of extra letters that need to be removed in order to obtain I. 
// If it is not possible to obtain I then output IMPOSSIBLE as y.

//test case 1
//Case #1: 2
//test case 2
//Case #2: IMPOSSIBLE
//test case 3
//Case #3: 0
//test case 4

    //check if both set are same or not
    if(s1_set!=s2_set){
       // cout<<"Case #"<<t-1<<": "<<ans<<endl;
        cout<<"Case #"<<t<<": IMPOSSIBLE"<<endl;
    }
    else{
      //  cout<<"Case #"<<t+1<<": IMPOSSIBLE"<<endl;
        cout<<"Case #"<<t-1<<": "<<ans<<endl;
    }
  



}

    return 0;
}