#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;



//     Choose some index i (1≤i≤N) and swap the ith character from the front and the ith character from the back.
// More formally, choose an index i and swap Si and S(N+1−i).

// Find the lexicographically smallest string that can be obtained by applying the above operation to the given string.

// for(int i = 0; i<n; i++){



    //from front ith char and from back ith char. replace ith is smaller.

    //replace char if smaller 

    //replace that char in string 


//all char push in vector.
//sort the vector.


//push all char in unordered_map with index


// unordered_map<char, int> m;


// for(int i = 0; i<n; i++){
//    m[s[i]] = i;
// }

// //sort map

// sort(m.begin(), m.end());








vector<char> v;
for(int i = 0; i<n; i++){
    v.push_back(s[i]);
}
//sort(v.begin(), v.end());

//check v[i] char is smaller than v[n+1-i] char. then replace v[i] with v[n+1-i].

//replace char if smaller

//swap the ith character from the front and the ith character from the back.

//
for(int i = 0; i<n/2; i++){
    if(v[i] > v[n-i-1]){
        swap(v[i], v[n-i-1]);
        i++;

    }
    else {
        i++;
    }
}

//check if vector is sorted or not.

bool flag = true;

for(int i = 0; i<n-1; i++){
    for(int j = i+1; j<n; j++){
        if(v[i] > v[j]){
            flag = false;
            break;
           
        }

        else{
            flag = true;
        }


    }

}
if(flag){
    //yes
    cout<<"YES"<<endl;
   
}
else{
  
    cout<<"NO"<<endl;
}

// if(is_sorted(v.begin(), v.end())){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }


//



// for(int i = 0; i<n; i++){
//     if(v[i] > v[n-i-1]){
//         swap(v[i], v[n-i-1]);
//         i++;
//     }
//     else {
//         i++;
//     }
   
// }

//print the vector.






// // //print 
// for(int i = 0; i<v.size(); i++){
//     cout<<v[i];
// }
// cout<<endl;



    // for(int i=0; i<n; i++){
    //    if(s[i]<s[n-i+1]){
    //        s[i] = s[n-i-1];

    //        i++;
    //    }
    //    else {
    //        i++;
    //    }

       

    //  }

    // cout<<s<<endl;



    
  





}

    return 0;
}