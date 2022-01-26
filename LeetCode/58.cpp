



class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int ans1 = 0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i] == ' ' && ans > 0) return ans;
            if(s[i] != ' ') ans++;

           
           

        }
        return ans;
    }
};















// class Solution {
// public:
//     int lengthOfLastWord(string s) {

//         //store all the words in a vector which have only char is present in s
//         //find the max length of the words in vector
//         //return max length
//         vector<string> words;
//         string word="";
//         for(int i=0;i<s.size();i++){
//             if(s[i]!=' '){
//                 word+=s[i];
//             }
//             else{
//                 if(word!=""){
//                     words.push_back(word);
//                     word="";
//                 }
//             }
//         }
//         if(word!="")
//             words.push_back(word);
//         int max=0;
//         for(int i=0;i<words.size();i++){
//             if(words[i].size()>max)
//                 max=words[i].size();
//         }
//         return max;




























       //scan all word and store in unordered_map 
       //return size of last word
        // unordered_map<char,int> m;
        // int n=s.size();
        // int i=0;
        // while(i<n){
        //     //delete spaces from last

        //     for(j=n-1;j>=0;j--){
        //         if(s[i]==' ')
        //         {
        //             if(s[j]==' ')
        //                {
        //                    m.clear();
        //                     j++;
        //                }
        //             else
        //             {
        //                 m[s[j]]++;
        //                 j++;
        //             }
        //         }
        //             m.clear();
        //              else{


        //             m[s[i]]++;
        //             i++;
        //         }
        //     }
        //     // if(s[i]==' '){
        //     //     m.clear();
        //     //     i++;
        //     // }
        //     //delete all space
        //     //  if(s[i]!=' '){
        //     //     m[s[i]]++;
        //     //     i++;
        //     // }
        //     // else{
        //     //     m[s[i]]++;
        //     //     i++;
        //     // }
        // }
        // int count=0;
        // //delete all space
        // //only count if char is not space
        // for(auto it=m.begin();it!=m.end();it++){
        //     if(it->first!=' ')
        //         count++;
        // }
        // return count;

        

        // // for(auto it: m){
        // //     count+=it.second;
        // // }
        // // return count;
       


        
//     }
// };