#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    ll n;
    cin>>n;
  ll a,b,c,d;
    cin>>a>>b>>c>>d;
    int count=0;


    


   

    if(n<=a ){
        count++;

        if(n<=b){
            count++;
            if(n<=c){
                count++;
                if(n<=d){
                    count++;
                }
                else {
                    if(n%d==0){
                       count+=n/d;
                    }
                    else{
                        count+=n/d+1;
                    }
                    
                }
            }
            else{
                if(n%c==0){
                    count+=n/c;
                }
                else{
                    count+=n/c+1;
                }
            }
        }
        else{
            if(n%b==0){
                count+=n/b;
            }
            else{
                count+=n/b+1;
            }
        }
    }
    else{
        if(n%a==0){
            count+=n/a;
        }
        else{
            count+=n/a+1;
        }
    }



    //c1,c2,c3,c4,c5 are the cities
    
    //one can travel from c1 to c2 in one minute. this train can occupy at most a people







    //one can travel from c2 to c3 in two minutes. this train can occupy at most b people
    //one can travel from c3 to c4 in three minutes. this train can occupy at most c people
    //one can travel from c4 to c5 in four minutes. this train can occupy at most d people

//n people at c1 and they want to go to c5







    

     cout<<count<<endl;
  

//     Bob built an empire with five cities (C_{1}, C_{2}, C_{3}, C_{4}, C_{5}) The only mode of transport in this empire is the train.

// 1. One can travel from C_{1} to C_{2} in one minute. This train can occupy at most A people..

// 2. One can travel from C 2 t0 C 3 in one minute. This train can occupy at most B people.

// 3. One can travel from C_{3} to C_{4} in one minute. This train can occupy at most C people.

// 4. One can travel from C_{4} to C_{5} in one minute. This train can occupy at most D people.

// For each of them, a train leaves the city teach integer time (0, 1, 2, ...).

// There is a group of N people at C_{1} , and they all want to go to C_{5} .

// At least how long does it take for all of them to reach there? 





















































    

    // ll c1=n;
    // ll c2=0;
    // ll c3=0;
    // ll c4=0;
    // ll c5=0;

    // ll c1_c2=0;
    // ll c2_c3=0;
    // ll c3_c4=0;
    // ll c4_c5=0;

    // ll c1_c2_c3=0;
    // ll c2_c3_c4=0;
    // ll c3_c4_c5=0;

    // ll c1_c2_c3_c4=0;
    // ll c2_c3_c4_c5=0;

    // ll c1_c2_c3_c4_c5=0;





    // while(c1>=0 && c2<=a && c3<=b && c4<=c && c5<=d){
    //     c1_c2=c1;
    //     c2_c3=c2;
    //     c3_c4=c3;
    //     c4_c5=c4;

    //     c1_c2_c3=c1_c2+c2_c3;
    //     c2_c3_c4=c2_c3+c3_c4;
    //     c3_c4_c5=c3_c4+c4_c5;

    //     c1_c2_c3_c4=c1_c2_c3+c3_c4;
    //     c2_c3_c4_c5=c2_c3_c4+c4_c5;

    //     c1_c2_c3_c4_c5=c1_c2_c3_c4+c4_c5;

    //     if(c1_c2_c3_c4_c5==n){
    //         count++;
    //     }
    //     c1--;
    //     c2++;
    //     c3++;
    //     c4++;
    //     c5++;
    // }
    // cout<<count<<endl;










   

}

    return 0;
}
