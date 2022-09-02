/*
 * @lc app=leetcode id=2124 lang=cpp
 *
 * [2124] Check if All A's Appears Before All B's
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
   bool checkString(string s) {

    // int n=s.size();
	// for(int i=0;i<n;i++){
	// 	if(s[i]=='b'){
	// 		for(int j=i+1;j<n;j++){
	// 			if(s[j]=='a'){
	// 				return false;
	// 			}
	// 		}
	// 	}

	// }

	// return true;

	int n=s.size();
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(s[i]=='a'){
			a++;

		}
		else{
			b++;
		}
		if(b>a){
			return false;
		}
	}

	return true;





		
	











	  //  int n=s.size();

		// if(n==1 && s[0]=='a')
		// 	return true;

		// if(n==1 && s[0]=='b')
		// 	return false;
		

		//store all 'a' positions in a vector
		// vector<int> v_a;
		// for(int i=1;i<=n;i++)
		// {
		// 	if(s[i]=='a')
		// 		v_a.push_back(i);
		// }

		// vector <int> v_b;
		// for(int i=1;i<=n;i++)
		// {
		// 	if(s[i]=='b')
		// 		v_b.push_back(i);
		// }


		
		//return v_a;
		//return v_b;

		// if(v_a.size()==1 && v_b.size()==0)
		// {
		// 	return true;
		// }

		// if(v_a.size()==0 && v_b.size()==1)
		// {
		// 	return true;
		// }


		// if( v_b.size()==0)
		// {
		// 	return true;
		// }
		// if(v_a.size()==0)
		// {
		// 	return true;
		// }

		// if(v_a[v_a.size()-1]>v_b[0])
		// {
		// 	return false;
		// }


		// return true;








        
        
    }
};
// @lc code=end






int main(){
Solution s;

	int t;
	cin>>t;

	while(t--)
	{
		string str;

		cin>>str;
		cout<<s.checkString(str)<<endl;
		// vector<int> v = s.checkString(str);
		// for(int i = 0; i < v.size(); i++) {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;

	}


	return 0;
}






















































