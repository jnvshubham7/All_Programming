 
   
    string newIPAdd (string s)
    {


      string ans="";
      s += ".";
      int n=s.size();
      int i=0;
      while(i<n){
        int j=i;
        while(s[j] != '.'){
          j++;
        }



        string temp=s.substr(i,j-i);

        int k=0;
        while(temp[k]=='0'){
          k++;

        }

        if(k==temp.size()){
          ans+='0';
        }

        else {
          ans+=temp.substr(k);
        }

        ans+='.';
        i=j+1;





      }


ans.pop_back();
return ans;

     












    //     while (s[0] == '0' && s[1] != '.') s.erase(s.begin());
    // size_t pos = s.find(".");
    // while(pos != string::npos) {
    //     while (s[pos+1] == '0' && s[pos+2] != '.' && pos != s.size()-2) {
    //         s.erase(s.begin() + pos+1);
    //     }
    //     pos = s.find(".", pos+1);
    // }
    // return s;



//in string where . is found afterthat all leading zeros are removed

//split string into array of strings where . is found
//store all split strings in in vector
//for each string in vector
//remove leading zeros
//if string is empty return false
//if string is not empty return true

// vector<string> ip;
// int i=0;
// while(i<s.length()){

//     if(s[i]=='.'){
//       //remove leading zeros
//       string temp=ip[ip.size()-1];
//       int j=0;
//       while(temp[j]=='0'){
//           temp.erase(j,1);
//       }
//       if(temp.length()==0){
//          // return "";
//       }
//       ip[ip.size()-1]=temp;
//       i++;
//     }
//     else{
//       string temp="";
//       while(i<s.length() && s[i]!='.'){
//           temp+=s[i];
//           i++;
//       }
//       ip.push_back(temp);
//     }
// }

// //add all string from vector  with . in between
// string ans="";
// for(int i=0;i<ip.size();i++){
//     ans+=ip[i];
//     if(i!=ip.size()-1){
//         ans+=".";
//     }
// }

//print ans
// return ans;

// }
// string ans="";
// for(int i=0;i<ip.size();i++){
//   ans+=ip[i];
// }

// //print ans
 //cout<<ans<<endl;

// string newIP="";   
// for(int i=0;i<ip.size();i++){
//     newIP+=ip[i];
// }
  







//         ip.push_back(s.substr(i-1,s.length()-i+1));
//         i++;
//     }
//     else{

//         i++;
//     }
// }






      
        //code here.
    }
    
    
    