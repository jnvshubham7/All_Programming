/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

    string reverseWords(string s) {

        vector<string> words;
        string word;

        int n=s.size();


        for(int i=0;i<n;i++)
        {



            if(s[i]==' ')
            {
                words.push_back(word);
                word="";
            }
            else{
                word+=s[i];
            }





        }

        words.push_back(word);


        for(auto &x:words)
        {
           //print 
        //    cout<<x<<endl;
            reverse(x.begin(),x.end());
            // cout<<x<<endl;
            

        }

        string ans="";

        for(auto &x:words)
        {
            ans+=x;
            ans+=" ";
        }

        ans.pop_back();

       // cout<<ans<<endl;

        return ans;

       

        

        




        
        

      

    }
};
// @lc code=end

