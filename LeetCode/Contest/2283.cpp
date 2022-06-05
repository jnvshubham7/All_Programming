// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long






class Solution {
public:
    bool digitCount(string num) {

        //store frequency of each digit in unordered_map

        // unordered_map<char, int> freq;
        // for (int i = 0; i < num.size(); i++) {
        //     freq[num[i]]++;
        // }


        // // store all digit in unordered_map with position
        // // unordered_map<char, vector<int>> digit;
        // // for (int i = 0; i < num.size(); i++) {
        // //     digit[num[i]].push_back(i);
        // // }

        // //match postiion as char and value as frequency
        // for (auto it = digit.begin(); it != digit.end(); it++) {
        //     if (freq[it->first] != it->second.size()) {
        //         return false;
        //     }
        // }

//         You are given a 0-indexed string num of length n consisting of digits.

// Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false

//         unordered_map<char, int> freq;
//         for (int i = 0; i < num.size(); i++) {
//             freq[num[i]]++;
//         }

//         // for (auto it = freq.begin(); it != freq.end(); it++) {
//         //     if (it->second != num.size() / it->first) {
//         //         return false;
//         //     }
//         // }

//         // return true;

//       unordered_map<char, int> digit;

//       //store position of each digit as char and value as int 
//         for (int i = 0; i < num.size(); i++) {

//             if(num[i]==0)
//             {
//                 continue;
//             }

//             else {

//                  digit.insert({i, num[i]});

//             }
          
//         }


// sort(digit.begin(), digit.end());
// //sort(freq.begin(), freq.end());

// //sort freq as first element 

// sort()


//         // for (int i = 0; i < num.size(); i++) {
//         //     digit[num[i]].push_back(i);
//         // }


//         for (auto it : digit) {

//             if (freq[it.first] != it.second) {
//                 return false;
//             }


            
           
//         }

//         return true;


        // for(int i=0;i<num.size();i++){
        //     if(){
        //         return false;
        //     }
        // }



//unordered_map<int, int> freq;

//store frequency of each digit in unordered_map
      

//count frequency of each position
// for(int i=0;i<num.size();i++){
//     freq[i]++;


// }

//return freq.first

//create string from freq.second

// string s;

// for(auto it:freq){
//     //convert int to string
//     s+=to_string(it.second);
// }

// //return s;

// if(s==num){
//     return true;
// }

// else{
//     return false;
// }




//return freq.size();


























  vector<int> digit;
    for (int i = 0; i < num.size(); i++) {
        digit.push_back(num[i]-'0');
    }


    unordered_map<int, int> freq;


//store frequency of each digit in unordered_map
    for (int i = 0; i < digit.size(); i++) {
        freq[digit[i]]++;
    }

//     num[0] = '1'. The digit 0 occurs once in num.
// num[1] = '2'. The digit 1 occurs twice in num.
// num[2] = '1'. The digit 2 occurs once in num.
// num[3] = '0'. The digit 3 occurs zero times in num.
// The condition holds true for every index in "1210", so return true.


for(int i=0;i<num.size();i++){
    if(freq[i]!=digit[i]){
        return false;
    }
}


    return true;


    //sum freq.second
    // int sum=0;
    // for (auto it = freq.begin(); it != freq.end(); it++) {
    //     sum+=it->second;
    // }

    // if(sum==num.size())
    // {
    //     cout<<"true";
    // }
    // else
    // {
    //     cout<<"false";
    // }







        
    }
};



// int main(){

// string num;
// cin>>num;

// //call unordered_map function
// // Solution s;

// // cout<<

// cout<<Solution().digitCount(num)<<endl;




//     //return 0;
// }










