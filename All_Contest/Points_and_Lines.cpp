#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){
//     Given N points of the form (xi,yi) on a 2

// -D plane.

// From each point, you draw 2

// lines one horizontal and one vertical. Now some of the lines may overlap each other, therefore you are required to print the number of distinct lines you can see on the plane.

// Note:

//     Two horizontal lines are distinct if they pass through different y

// coordinates.
// Two vertical lines are distinct if they pass through different x
// coordinates.



int n;
cin>>n;

//create two set x y
set<int> x,y;

while(n--){

    int xi,yi;
    cin>>xi>>yi;
    x.insert(xi);
    y.insert(yi);


}

//sum of size
cout<<x.size()+y.size()<<endl;
//cout<<x.size()*y.size()<<endl;

















//
// while(n--){
//     int a,b;
//     cin>>a>>b;
//     //push the in set
//     set<int> s;
//     s.insert(a);
//     s.insert(b);

// }
// cout<<s.size()<<endl;




//push both horizontal and vertical lines into a set
// set<pair<int,int>>s;
// for(int i=0;i<n;i++){
//     s.insert({x[i],y[i]});
//     s.insert({y[i],x[i]});
// }
// // cout<<s.size()<<endl;
// cout<<s.size()/2<<endl;




//both store in vector pair<int,int>
// vector<pair<int,int>> v;
// for(int i=0;i<n;i++){
//     v.push_back(make_pair(x[i],y[i]));
// }
// int count=0;


//draw 2 lines one horizontal and one vertical and check if they are distinct









//first check v.first and v.second
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(v[i].first==v[j].first){
//             count++;
//         }
//         else if(v[i].second==v[j].second){
//             count++;
//         }
//     }
// }
// cout<<count<<endl;




//check for horizontal lines and vertical lines
// int h=0,v=0;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(x[i]==x[j]){
//             h++;
//            // Two horizontal lines are distinct if they pass through different y coordinates.
           
//         }
//         if(y[i]==y[j]){
//             v++;
//         }
//     }
// }
 



// coordinates.
// Two vertical lines are distinct if they pass through different x
// coordinates.

//cout<<h+v<<endl;





    

}

    return 0;
}