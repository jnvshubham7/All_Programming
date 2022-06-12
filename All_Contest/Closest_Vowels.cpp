#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  ll t;
  cin >> t;
  while (t--) {

    ll n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;

    // check each character if char is consonant and  if position of char is b/w
    // two vowels then count++

    // store a to z with postion in unordered_map

    unordered_map<char, int> m;

    for (int i = 1; i <= 26; i++) {
      m[(char)(i + 97)] = i;
    }

    // put a to z char with position in unordered_map 1-26
    //  for()

    // print map

    // sort the map

    // sort(m.begin(),m.end());

    // sort with second element of pair
    // sort(m.begin(),m.end(),[](const pair<char,int>& a,const pair<char,int>&
    // b){return a.second<b.second;});

    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<it->second<<" ";
    // }

    // cout<<endl;
    ll mod = 1000000007;

    vector<int> v;

    for (int i = 0; i < n; i++) {
      // if char is consonant then check the position of char from unordered_map
      // and if position is b/w two vowels then count++
      if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r') {
        // store the position of char in vector
        //   v.push_back(m[s[i]]);

        count=count%mod*2%mod;
        count%=mod;

      }

    //   else {
    //     continue;
    //   }
      // if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      // {
      //     if(i!=0&&i!=n-1)
      //     {
      //         if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')
      //         {
      //             count++;
      //         }
      //     }
      // }
    }

    // print vector

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]>1 && v[i]<5)
    //     {
    //         if((v[i]-1)==(5-v[i]))
    //         {
    //             //2 count increment
    //             count*=2;

    //         }

    //     }

    //     if(v[i]>5 && v[i]<9)
    //     {
    //         if((v[i]-5)==(9-v[i]))
    //         {
    //             count*=2;
    //         }

    //     }

    //     if(v[i]>9 && v[i]<15)
    //     {
    //         if((v[i]-9)==(15-v[i]))
    //         {
    //             count*=2;
    //         }

    //     }

    //     if(v[i]>15 && v[i]<21)
    //     {
    //         if((v[i]-15)==(21-v[i]))
    //         {
    //            count*=2;
    //         }

    //     }

    // }

    // if(v.size()==0)
    // {
    //     cout<<"1"<<endl;
    // }

    // else {
    // modulo 109+7
    //   cout<<(count%10^9+7)<<endl;

    cout << count << endl;

    //}

    // vector<int> v_pos;

    // print vowels postion in a to z

    //
    // store vowels position in vector from a to z
    // for(int i=0;i<26;i++)
    // {
    //     v_pos.push_back(m[(char)(i+97)]);
    // }
    // //print v-pos
    // for(int i=0;i<v_pos.size();i++)
    // {
    //     cout<<v_pos[i]<<" ";

    // }

    // cout<<endl;
  }

  return 0;
}