#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    // ll v,a,b,c;
    // cin>>v>>a>>b>>c;









ll V,A,B,C;
cin>>V>>A>>B>>C;


// Three people live in Takahashi's house: Takahashi, his father, and his mother. All of them wash their hair in the bathroom each night.
// His father, his mother, and Takahashi take a bath in this order and use A, B, and

// C milliliters of shampoo, respectively.

// This morning, the bottle contained
// V milliliters of shampoo. Without refilling, who will be the first to run short of shampoo to wash their hair?





//check who will be the first to run short of shampoo to wash their hair
//check who will be the first to run short of shampoo to wash their hair

int a=0,b=0,c=0;

//first V-A if V<0 then a++    2nd V-B if V<0 then b++    3rd V-C if V<0 then c++ until V>=0



V=V-A;
if(V<0)
    a++;
V=V-B;
if(V<0)
    b++;
V=V-C;
if(V<0)
    c++;

    





















// while(V!=0){

//     ll V=V-A;

//     if(V<0){
       
//         a++;
//     }

//     V=V-B;

//     if(V<0){
       
//         b++;
//     }

//     V=V-C;

//     if(V<0){
       
//         c++;
//     }



//     // if(V>B){
//     //     V=V-B;
//     //     b++;
//     //     //break;
//     // }
//     // else if(V>C){
//     //     V=V-C;
//     //     c++;
//     //    // break;
//     // }
//     // else if(V>A){
//     //     V=V-A;
//     //     a++;
//     //    // break;
//     // }
//     // else{
//     //     break;
//     // }


//     // if(ans<0){
//     //     V=V-A;
//     //     a++;
//     // }
//     // else if(ans<0){
//     //     V=V-B;
//     //     b++;
//     // }
//     // else if(ans<0){
//     //     V=V-C;
//     //     c++;
//     // }
//     // else{
//     //     break;
//     // }


//     // if(V>=A){
//     //     V=V-A;
//     //     A=A;
//     //     a++;
//     // }
//     // else if(V>=B){
//     //     V=V-B;
//     //     B=B;
//     //     b++;
//     // }
//     // else if(V>=C){
//     //     V=V-C;
//     //     C=C;
//     //     c++;
//     // }
//     // else{
//     //     break;
//     // }
// }


//check who will be the first to run short of shampoo to wash their hair

cout<<a<<" "<<b<<" "<<c<<endl;














// while(v!=0){

//     ll F=v-a;
    

//     ll M=F-b;
//     ll T=M-c;


//     if(F<b){
//         cout<<"M"<<endl;
//         break;
//     }
//     else if(M<c){
//         cout<<"T"<<endl;
//         break;
//     }
//     else if(T<a){
//         cout<<"F"<<endl;
//         break;
//     }
//     // else{
//     //     cout<<"F"<<endl;
//     //     break;
//     // }

//     v-=T;
//     }

   

    //Three people live in Takahashi's house: Takahashi, his father, and his mother. All of them wash their hair in the bathroom each night.
// His father, his mother, and Takahashi take a bath in this order and use A, B, and

// C milliliters of shampoo, respectively.

// This morning, the bottle contained
// V milliliters of shampoo. Without refilling, who will be the first to run short of shampoo to wash their hair?

//check which place is the first to run short of shampoo
    // ll takahashi=v%(a+b+c);
    // ll father=a-takahashi;
    // ll mother=b-father;
    // ll takahashi_father=c-mother;
    // if(takahashi_father<0)
    //     takahashi_father+=a;
    // if(takahashi_father==0)
    //     cout<<"Takahashi"<<endl;
    // else if(takahashi_father==a)
    //     cout<<"Father"<<endl;
    // else
    //     cout<<"Mother"<<endl;
//     return 0;
// }


// ll v,f,m,t;
// cin>>v>>f>>m>>t;


//decrease f from v then check there is shortage or not





// while(v!=0){
//     //ifv-f<f then print"F"

//     v=v-f;
//     if(v<f){
//         cout<<"F"<<endl;
//         break;
//     }

//     v=v-m;

//     //if(v-f-m<m) then print"M"
//     else if(v<m){
//         cout<<"M"<<endl;
//         break;
//     }


//     v=v-t;
//     //if(v-f-m-t<t) then print"T"
//     else if(v<t){
//         cout<<"T"<<endl;
//         break;
//     }

//     else {
//         cout<<"F"<<endl;
//         break;
//     }




// }








    return 0;
}