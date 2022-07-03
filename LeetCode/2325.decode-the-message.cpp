/*
 * @lc app=leetcode id=2325 lang=cpp
 *
 * [2325] Decode the Message
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
    




// @lc code=start
class Solution {
public:
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>

    string decodeMessage(string key, string message) {

        string ans="";

       

        

        

        vector<char> v;

       //key put in v 

        for(int i=0;i<key.size();i++)
        {

            //only if key[i] is not already in v
            if(key[i]!=' ' && find(v.begin(),v.end(),key[i])==v.end())
            {
                v.pb(key[i]);
            }
           
           
        }

        map<char,char> m;

        for(int i=0;i<v.size();i++)
        {
            m[v[i]]='a'+i;
        }


        //print map
        for(auto i:m)
        {
           // cout<<i.first<<" "<<i.second<<endl;
        }

     //match message with key
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ')
            {
                ans+=' ';
            }
            else
            {
                ans+=m[message[i]];
            }
        }
       cout<<ans<<endl;
        return ans;


    }
};
// @lc code=end


int main(){
Solution s;

ll t=1;
//cin>>t;
while(t--){

//     "the quick brown fox jumps over the lazy dog"
// "vkbs bs t suepuv"

// string key= "the quick brown fox jumps over the lazy dog";
// string message="vkbs bs t suepuv";
//key = "eljuxhpwnyrdgtqkviszcfmabo", message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb"
string key= "eljuxhpwnyrdgtqkviszcfmabo";
string message="zwx hnfx lqantp mnoeius ycgk vcnjrdb";
//cout<<s.decodeMessage(key,message)<<endl;

s.decodeMessage(key,message);


    


}

    return 0;
}