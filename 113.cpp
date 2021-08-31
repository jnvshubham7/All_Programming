
#include<iostream>
using namespace std;


// Your code goes here

int compute(int arg1, int arg2, int arg3){
    int ans=(arg1^3);
    return ans;
}


int main()  {
    int A, B, C;
    cin>>A>>B>>C;
    compute(A, B, C);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0;
}
