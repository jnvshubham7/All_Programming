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

int main(){
ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    string s;
    cin>>s;

    string ans="";

    int flag=1;


    while(s.size()>0){
        if(flag==1){

            if(s[0]=='1'){
                ans=ans+ '1';
                s.erase(s.begin());
                flag=0;
            }
            else{
                ans='0'+ans;
                s.erase(s.begin());
                flag=0;
            }




            // ans+=s[0];
            // s.erase(s.begin());
            // flag=0;
        }
        else{
            if(s[s.size()-1]=='1'){
                ans='1'+ans;
                s.erase(s.end()-1);
                flag=1;
            }
            else{
                ans=ans+'0';
                s.erase(s.end()-1);
                flag=1;
            }   
            // ans+=s[s.size()-1];
            // s.erase(s.end()-1);
            // flag=1;
        }


        


    


    //    if(flag)
    //    {
    //        if(s[0]=='0')
    //        {
    //            //push 0 in front of ans
    //             ans="0"+ans;

                

    //        }

    //           else
    //           {
    //             //push 1 in back of ans
    //             ans=ans+"1";
    //           }

    //           flag=0;

    //        //   cout<<flag<<endl;


    //         //  cout<<s<<" ";

    //           s.erase(s.begin());

    //         //  cout<<s<<" ";

    //    }

    //      else
    //      {
    //           if(s[n-1]=='0')
    //           {
    //             //push 1 in back of ans
    //              ans=ans+"0";
    
                 
    
    //           }
    
    //               else
    //               {
    //              //push 0 in front of ans
    //              ans="1"+ans;
    //               }
    
    //               flag=1;
    //               //cout<<flag<<endl;

    //               //erase the last element of s

    //             //  cout<<s<<" ";

    //                 s.erase(s.end()-1);

    //               //  cout<<s<<" ";
                  
    
    //      }

    //      n=s.length();

    //      cout<<s<<" ";
      //  cout<<ans<<" ";



         



       
       
           
    }

  //  cout<<endl;



   cout<<ans<<endl;



    

}

    return 0;
}