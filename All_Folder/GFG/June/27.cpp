
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


//   string chngToBin(int n)
//   {
        
//   }

    vector<int> changeBits(int n) {

        int temp = n;
        
         vector<int> v;

            string str="";
        while(n>0)
        {
            str+=(n%2+'0');
            n/=2;
        }

        reverse(all(str));
        //reverse();
        //change all 0 to 1
        fr(i,str.size())
        {
            if(str[i]=='0')
            str[i]='1';
            // else
            // str[i]='0';
        }
        //convert binary to decimal
        int dec=0;
        int j=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            dec+=(str[i]-'0')*pow(2,j);
            j++;
        }

        v.push_back(abs(dec-temp));
        v.push_back(dec);

        return v;

        // code here
    }
};



















int main(){
Solution s;
      

      int t;
        cin>>t;





        while(t--)
        {
            int n;
            cin>>n;


            vector<int> v=s.changeBits(n);


        //     string str="";
        // while(n>0)
        // {
        //     str+=(n%2+'0');
        //     n/=2;
        // }

        // reverse(all(str));
        // //reverse();
        // //change all 0 to 1
        // fr(i,str.size())
        // {
        //     if(str[i]=='0')
        //     str[i]='1';
        //     // else
        //     // str[i]='0';
        // }
        // //convert binary to decimal
        // int dec=0;
        // int j=0;
        // for(int i=str.size()-1;i>=0;i--)
        // {
        //     dec+=(str[i]-'0')*pow(2,j);
        //     j++;
        // }

        // v.push_back(dec-n);
        // v.push_back(dec);

        //print the answer
        fr(i,v.size())
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        

        //cout<<dec<<endl;
        
       // cout<<str<<endl;



            // cout<<s.changeBits(n)<<endl;

            // vector<int> v=s.changeBits(n);
            // for(int i=0;i<v.size();i++)
            // {
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;




        }



 



    return 0;
}