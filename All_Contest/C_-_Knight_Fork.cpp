#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

// The distance between points (2,1) and (x1​,y1​) is (0−2)2+(0−1)2
// ​=5
// ​;
// the distance between points
// (2,1) and (x2​,y2​) is (3−2)2+(3−1)2
// ​=5
// ​;
// point
// (2,1) is a lattice point,


ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
// find and store in vector The distance between points (2,1) and (x1​,y1​)
//use distance formula
// find  (x1-2)^2 + (y1-1)^2
// find  (x2-2)^2 + (y2-1)^2
//both are equal to sqrt(5)

ll ans1=sqrt((x1-2)*(x1-2)+(y1-1)*(y1-1));
ll ans2=sqrt((x2-2)*(x2-2)+(y2-1)*(y2-1));

ll ans3=sqrt((x1-1)*(x1-1)+(y1-2)*(y1-2));
ll ans4=sqrt((x2-1)*(x2-1)+(y2-2)*(y2-2));


ll ans5=sqrt((x1-1)*(x1-1)+(y1+2)*(y1+2));
ll ans6=sqrt((x2-1)*(x2-1)+(y2+2)*(y2+2));


ll ans7=sqrt((x1+1)*(x1+1)+(y1+2)*(y1+2));
ll ans8=sqrt((x2+1)*(x2+1)+(y2+2)*(y2+2));


ll ans9=sqrt((x1+1)*(x1+1)+(y1-2)*(y1-2));
ll ans10=sqrt((x2+1)*(x2+1)+(y2-2)*(y2-2));


ll ans11=sqrt((x1+2)*(x1+2)+(y1-1)*(y1-1));
ll ans12=sqrt((x2+2)*(x2+2)+(y2-1)*(y2-1));

ll ans13=sqrt((x1+2)*(x1+2)+(y1+1)*(y1+1));
ll ans14=sqrt((x2+2)*(x2+2)+(y2+1)*(y2+1));

ll ans15=sqrt((x1-2)*(x1-2)+(y1+1)*(y1+1));
ll ans16=sqrt((x2-2)*(x2-2)+(y2+1)*(y2+1));

//print all the answers
//cout<<fixed<<setprecision(2)<<ans1<<endl;



//ceil of all answer
// if(ciel(ans1)==ceil(ans2)){

// }

if(ans1==ans2)
{
    cout<<"YES"<<endl;
}
else if(ans3==ans4)
{
    cout<<"YES"<<endl;
}
else if(ans5==ans6)
{
    cout<<"YES"<<endl;
}
else if(ans7==ans8)
{
    cout<<"YES"<<endl;
}
else if(ans9==ans10)
{
    cout<<"YES"<<endl;
}
else if(ans11==ans12)
{
    cout<<"YES"<<endl;
}
else if(ans13==ans14)
{
    cout<<"YES"<<endl;
}
else if(ans15==ans16)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}




//print ans1 ans2
//cout<<fixed<<setprecision(2)<<ans1<<" "<<ans2<<endl;
//print ans3 ans4
//cout<<fixed<<setprecision(2)<<ans3<<" "<<ans4<<endl;
// if(ans1==ans2 || ans3==ans4)
// {
//     cout<<"YES"<<endl;
// }
// else
// {
//     cout<<"NO"<<endl;
// }
















    return 0;
}
