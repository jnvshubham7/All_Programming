#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    // You are given string s consisting of opening and closing brackets of four kinds, 0, 0, 0). 
    // There are two types of brackets: opening and closing. 
    // You can replace any bracket with another of the same type. 
    // For example, you can replace < by the bracket, but you can't replace it by) or >, 
    // (Opening brackets can be replaced by opening brackets only and closing brackets can be replaced by closing brackets only). 
    // Let's define a regular bracket sequence (RBS). 
    // An empty string is RBS. Let s1 and $2 be a RBS then the strings $2, 
    // (s1)s2, [51]s2, (51)52 are also RBS. For example the string "[[001]" is RBS, but the strings "DO" and "100" are not.


// Determine the least number of replacements to make the strings a RBS.

// Input First line contains T (number of test cases). The next line contains a non-empty strings, consisting of only opening and closing brackets of four kinds. The length of s does not exceed 106,


    int t;
    cin>>t;
    while(t--){

        //Determine the least number of replacements to make the strings a RBS.
        //Opening brackets can be replaced by opening brackets only and closing brackets can be replaced by closing brackets only

        string s;
        cin>>s;

        int count=0;

        




        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='<'){
        //         count++;
        //     }
        //     else if(s[i]=='>'){
        //         count++;
        //     }
        //     else if(s[i]=='('){
        //         count++;
        //     }
        //     else if(s[i]==')'){
        //         count++;
        //     }
        // }
        // cout<<count<<endl;






     }



    return 0;
}





























#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

 ll i,j,k;
    ll n,count=0;
    string s;char x,y;
    deque<char> ch;


    map<char,char> clo;

    clo['}']='{';
    clo['>']='<';
    clo[']']='[';
    clo[')']='(';


    cin>>s;
    n=s.length();

    for(i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[' || s[i]=='<')
            ch.push_back(s[i]);

        else
        {
            if(ch.size()==0)
            {
                cout<<"Impossible";return 0;
            }

            if(clo[s[i]]==ch.back())
                ch.pop_back();
            else
            {
                ch.pop_back();
                count++;
            }

        }
    }

    if(ch.size()==0)
        cout<<count<<endl;
    else
        cout<<"Impossible"<<endl;

    }
    //freopen("in.txt","r",stdin);
   

    return 0;
} 
