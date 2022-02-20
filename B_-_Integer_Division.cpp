#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll x;
cin>>x;

//For a real number x, ⌊x⌋ denotes "the maximum integer not exceeding x". 
//For example, we have ⌊4.7⌋=4,⌊−2.4⌋=−3, and ⌊5⌋=5. 
//(For more details, please refer to the description in the Sample Input and Output.)
// double ans=x/10

// if(ans1==0)
// {
//     cout<<x/10<<endl;
// }

// else if(ans<0){
//     //the maximum integer not exceeding ans
//     cout<<ceil(ans)<<endl;
//    // cout<<ans<<endl;
// }























//find mode[x/10]
//⌊x⌋ denotes "the maximum integer not exceeding x"

//ans = x/10
//print the maximum integer not exceeding ans 
//cout<<(x/10)<<endl;

double ans=x/10;
//print the maximum integer not exceeding ans
//print [ans] 
//
//if ans<0 then take maximum integer not exceeding ans
//if ans>0 then take minimum integer not exceeding ans
//if ans=0 then take 0


if(x%10==0)
{
    cout<<(x/10)<<endl;
}


else if(ans<0)
{
    //take maximum integer not exceeding ans
    cout<<ceil(ans)-1<<endl;
   // cout<<(double)ceil(ans)<<endl;
}
else 
{
    cout<<ceil(ans)<<endl;
}
// else
// {
//     cout<<0<<endl;
// }



    return 0;
}