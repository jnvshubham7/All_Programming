class Solution {
public:
    char findTheDifference(string s, string t) {
        //  int a = 0;
        // int b = 0;
        // for (char c : s)
        //     a += c;
        // for (char c : t)
        //     b += c;
            
        // return b - a;

        //size of s and t
        // int s_size = s.size();
        // int t_size = t.size();
        // //find the difference in size
        // int diff = t_size - s_size;
        // //return all char from t_size-diff to t_size
        // return t[t_size-diff];

      

        //store all characters in s in vector v1
        //store all characters in t in vector v2
        //compare v1 and v2
        vector<char> s1;
        vector<char> s2;
        //store all characters in s in vector v1
        for(int i=0;i<s.size();i++){
            
                s1.push_back(s[i]);
            
        }
        //store all characters in t in vector v2
        for(int i=0;i<t.size();i++){
          
                s2.push_back(t[i]);
            
        }
        //sort s1 and s2
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        //compare s1 and s2 
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                return s2[i];
            }
        }
        return s2[s2.size()-1];


        //compare all characters in v1 and v2

        // for(auto it:v2){
        //    if(v1.find(it)==v1.end()){
        //         return it;
        //     }
        // }
        // return '0';

       // for(auto it)


        //  for(auto it=s2.begin();it!=s2.end();it++){
        //     // if(s1.find(*it)==s1.end())
        //     //check if all characters in s2 are in s1 or not
        //     if(find(s1.begin(),s1.end(),*it)==s1.end()){

        //         return *it;
        // }
        // }
        // return '0';



        //print v1 and v2
    //     for(int i=0;i<v1.size();i++){
           
    //        return v1[i];

    //     }
    //    // cout<<endl;

    //     //print v2
    //     for(int i=0;i<v2.size();i++){
    //        return v2[i];
    //     }
      //  cout<<endl;



        //compare v1 and v2
       //return the difference
       







        // unordered_set<char> s1;
        // for(int i=0;i<s.size();i++)
        //     s1.insert(s[i]);
        // //store all characters in t in set s2
        // unordered_set<char> s2;
        // for(int i=0;i<t.size();i++)
        //     s2.insert(t[i]);
        // //find difference between s1 and s2
        // for(auto it=s2.begin();it!=s2.end();it++){
        //     if(s1.find(*it)==s1.end())
        //         return *it;
        // }
        // return '\0';


        

        
    }
};