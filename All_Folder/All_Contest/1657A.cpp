#include<bits/stdc++.h>
using namespace std;
#define ll long long








void solve()
{
   int x,y;
    cin>>x>>y;

    if(x==0 && y==0)
    {
        cout<<"0"<<endl;
        return;
    }

       int f = (0 - x) * (0 - x) + (0 - y) * (0 - y);
    int r = sqrt(f);

    if(r*r==f)
    {
        cout<<"1"<<endl;
      //  return;
    }

    else {
        cout<<"2"<<endl;
       // return;
    }


}














int main(){

int t;
cin>>t;
while(t--){

     solve();

  
//     There's a chip in the point (0,0) of the coordinate plane. In one operation, you can move the chip from some point (x1,y1) to some point (x2,y2) if the Euclidean distance between these two points is an integer (i.e. sqrt((x1−x2)^2+(y1−y2)^2)

// is integer).

// Your task is to determine the minimum number of operations required to move the chip from the point (0,0)
// to the point (x,y).






}

   // return 0;
}