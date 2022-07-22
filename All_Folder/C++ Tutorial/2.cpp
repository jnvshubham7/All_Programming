#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    auto it =s.find("abc");
    if(it !=s.end()){
        s.erase(it);

    } 
    s.erase("bcd");
    print(s);

    return 0;
}