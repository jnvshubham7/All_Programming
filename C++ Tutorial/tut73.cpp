#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
//#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
  //  fileio;

    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["jack"]= 59;
    marksMap["rohan"]=2;
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}