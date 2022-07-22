#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  // find ARC in string s
  int count = 0;

  // while ARC is present in string s

  // while(s[i]=='A' && s[i]=='C' && s[i]=='R')
  // {

  // while(n--){
  // for(int i=0;i<n;i++){
  //     if(s[i]=='A' && s[i+1]=='C' && s[i+2]=='R')

  // int flag=0;
  // // while(s.find("ARC")==string::npos){
  // flag=1;
  // break;x
  // cout<<count<<endl;

  // }
  // else{

  // flag=0;

  while (s.find("ARC") != string::npos) {

    if (count % 2 == 0) {
      for (int i = 0; i < n; i++) {

        if (s[i] == 'A' && s[i + 1] == 'R' && s[i + 2] == 'C') {
          count++;
          // replace ARC to R
          //  s[i]='R';
          //  s[i+1]="";
          //  s[i+2]="";

          // replace ARC to R
          s.replace(i, 3, "R");
          //  cout<<s<<endl;

          //  i+=2;
        }
      }

    }

    else {
      for (int j = 0; j < n; j++) {
        if (s[j] == 'A' && s[j + 1] == 'R' && s[j + 2] == 'C') {
          count++;
          // replace ARC to R
          //  s[i]='R';
          //  s[i+1]="";
          //  s[i+2]="";

          // replace ARC to AC
          s.replace(j, 3, "AC");

           // j+=2;
        }
      }
    }
  }
  // if(count%2==0){
  // for(int i=0;i<n;i++){

  //     if(s[i]=='A' && s[i+1]=='R' && s[i+2]=='C'){
  //         count++;
  //     //replace ARC to R
  //     // s[i]='R';
  //     // s[i+1]="";
  //     // s[i+2]="";

  //     //replace ARC to R
  //      s.replace(i,3,"R");
  //    //  cout<<s<<endl;

  //       //  i+=2;
  //     }
  // }

  // }

  // else {
  //     for(int j=0;j<n;j++){
  //      if(s[j]=='A' && s[j+1]=='R' && s[j+2]=='C'){
  //         count++;
  //     //replace ARC to R
  //     // s[i]='R';
  //     // s[i+1]="";
  //     // s[i+2]="";

  //     //replace ARC to AC
  //     s.replace(j,3,"AC");

  //      }
  // }

  // }

  //}

  cout << count << endl;

  // if(s.find("ARC")!=string::npos){

  return 0;
}