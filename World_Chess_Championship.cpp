#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    string s;
    cin>>s;
    //store all C's in a vector and store all N's in another vector and store all D's in another vector
    vector<char> C;
    vector<char> N;
    vector<char> D;

    int m=s.size();
    for(int i=0;i<m;i++)
    {
        if(s[i]=='C')
        {
            C.push_back(s[i]);
        }
        else if(s[i]=='N')
        {
            N.push_back(s[i]);
        }
        else
        {
            D.push_back(s[i]);
        }
    }


    //print the number of C's and N's and D's
  //  cout<<C.size()<<" "<<N.size()<<" "<<D.size()<<endl;

// int p=2*C.size() + 1*D.size();
// int q=0*N.size() + 1*D.size();




    if(C.size()>N.size() )
    {
        cout<<60*n<<endl;
    }
   else if(N.size()>C.size())
    {
        cout<<40*n<<endl;
    }
    else
    {
        if(C.size()==N.size())
        {
            cout<<55*n<<endl;
        }
        else
        {
            cout<<45*n<<endl;
        }
       // cout<<55*n<<endl;
    }

}

    return 0;
}