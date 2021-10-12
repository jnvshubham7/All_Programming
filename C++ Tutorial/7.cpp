#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    deque<int> d;
    d.push_back(5);
    //cout<<d.back<<endl;
    d.push_back(2);

    d.push_front(3);
    d.pop_back();
    d.pop_front();

    return 0;
}