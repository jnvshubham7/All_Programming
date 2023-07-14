


/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
    




// @lc code=start






class Solution {
public:
    int countDaysTogether(string aA, string lA, string aB, string lB) {

        string arriveAlice = aA;

        string leaveAlice = lA;

        string arriveBob = aB;

        string leaveBob = lB;

       


        int a1 = stoi(arriveAlice.substr(0,2)) ;
        int a2 = stoi(arriveAlice.substr(3,2)) ;
        
        int b1 = stoi(leaveAlice.substr(0,2)) ;
        int b2 = stoi(leaveAlice.substr(3,2)) ;

        int c1 = stoi(arriveBob.substr(0,2)) ;
        int c2 = stoi(arriveBob.substr(3,2)) ;

        int d1 = stoi(leaveBob.substr(0,2)) ;
        int d2 = stoi(leaveBob.substr(3,2)) ;

        cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<" "<<c1<<" "<<c2<<" "<<d1<<" "<<d2<<endl;


       map<int,int> m;

      m[0] =31, m[1] =28, m[2] =31, m[3] =30, m[4] =31, m[5] =30, m[6] =31, m[7] =31, m[8] =30, m[9] =31, m[10] =30, m[11] =31;





         if(a1>=c1 && a1<=d1 || b1>=c1 && b1<=d1 )
            {

                
       vector<int> s, e;



        int st=a1*m[a1]+a2;

        int en=b1*m[b1]+b2;

        for(int i=st;i<=en;i++)
            s.push_back(i);

        st=c1*m[c1]+c2;
        en = d1*m[d1]+d2;

        for(int i=st;i<=en;i++)
            e.push_back(i);

        int ans=0;


        if(a1 == c1 && a2 == c2 && b1 == d1 && b2 == d2)
            return 0;

        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<e.size();j++)
            {
                if(s[i]==e[j])
                    ans++;
            }
        }

        return ans;




            }


        return 0;


    }




};


// @lc code=end












int main(){
Solution s;

int a1,a2, b1,b2, c1,c2, d1,d2;

cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;

string aA = to_string(a1)+":"+to_string(a2);
string lA = to_string(b1)+":"+to_string(b2);
string aB = to_string(c1)+":"+to_string(c2);
string lB = to_string(d1)+":"+to_string(d2);

cout<<s.countDaysTogether(aA,lA,aB,lB)<<endl;


    return 0;
}