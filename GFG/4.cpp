
string reverseWords(string s1){
    string s2;
    int r;
    int len = s1.length();
    for(int i=len-1;i>=0;i--){
        if(s1[i]=='.'){
            r=len-i;
            len=i-1;
            s2.append(s1.substr(i+1,r));
            s2.append(".");
        }
    }

    s2.append(s1.substr(0,len+1));
    return s2;

}






















//  string reverseWords(string S) 
//     { 


//        // function 
//         reverse (S) {
//     S = word.split('.').reverse().join('.');
    
//     return S;

// }
// word = 'i.like.this.program.very.much'
// word = 'pqr.mno'
// console.log(reverse(word))


        //reverse the whole string not char 
        //store the word in vector which . is provided by the user
        //reverse the word and store it in the vector
        //convert the vector to string
        //return the string
//assume . is the space
//then store all words in vector
//reverse the words and store it in the vector
//convert the vector to string
//return the string
        // vector<string> v;
        // stringstream ss(S);
        // string temp;
        // while(ss>>temp)
        // {
        //     v.push_back(temp);
        // }
        // for(int i=0;i<v.size();i++)
        // {
        //     reverse(v[i].begin(),v[i].end());
        // }











        // string ans;
        // vector<string> v;
        // stringstream ss(S);
        // string temp;
        // while(ss>>temp)
        // {
        //     v.push_back(temp);
        // }
        // for(int i=v.size()-1;i>=0;i--)
        // {
        //     ans+=v[i];
        //     if(i!=0)
        //     ans+=" ";
        // }   
        // return ans;






        //reverse each word

        // code here 
    //} 



