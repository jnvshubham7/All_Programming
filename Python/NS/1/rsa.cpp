
#include<bits/stdc++.h>
 
using namespace std;
 
//to find gcd
int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}
 
int main()
{
    auto t1 = chrono::high_resolution_clock::now();

    for(int i=0;i<50;i++) {
        //2 random prime numbers
        double p = 3;
        double q = 7;
        double n=p*q;
        double count;
        double totient = (p-1)*(q-1);
    
        //public key
        //e stands for encrypt
        double e=2;
    
        //for checking co-prime which satisfies e>1
        while(e<totient){
        count = gcd(e,totient);
        if(count==1)
            break;
        else
            e++;
        }
    
        //private key
        //d stands for decrypt
        double d;
    
        //k can be any arbitrary value
        double k = 2;
    
        //choosing d such that it satisfies d*e = 1 + k * totient
        d = (1 + (k*totient))/e;
        double msg = 12;
        double c = pow(msg,e);
        double m = pow(c,d);
        c=fmod(c,n);
        m=fmod(m,n);
    
        cout<<"Message data = "<<msg;
        cout<<"\n"<<"p = "<<p;
        cout<<"\n"<<"q = "<<q;
        cout<<"\n"<<"n = pq = "<<n;
        cout<<"\n"<<"totient = "<<totient;
        cout<<"\n"<<"e = "<<e;
        cout<<"\n"<<"d = "<<d;
        cout<<"\n"<<"Encrypted data = "<<c;
        cout<<"\n"<<"Original Message sent = "<<m<<endl<<endl;
    }

    // End time
    auto t2 = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    chrono::duration<int64_t,nano> elapsed = t2 - t1;
  
    cout << "Total Algorithm Runtime is: " << elapsed.count()/1000000 << " miliseconds."<<endl;
    cout << "Average Algorithm Runtime is: " << (elapsed.count()/1000000)/50 << " miliseconds.";
 
    return 0;
}