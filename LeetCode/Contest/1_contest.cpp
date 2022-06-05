#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


  string num;
    cin>>num;

    //store each digit in vector
    vector<int> digit;
    for (int i = 0; i < num.size(); i++) {
        digit.push_back(num[i]-'0');
    }


    unordered_map<int, int> freq;


//store frequency of each digit in unordered_map
    for (int i = 0; i < digit.size(); i++) {
        freq[digit[i]]++;
    }

    //sum freq.second
    int sum=0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        sum+=it->second;
    }

    if(sum==num.size())
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


    

   


//print freq

// for(auto it=freq.begin();it!=freq.end();it++){
//     cout<<it->first<<" "<<it->second<<endl;
// }


    // for(int i=0;i<digit.size();i++){
    //    cout<<digit[i]<<" ";
    // }








    



    return 0;
}