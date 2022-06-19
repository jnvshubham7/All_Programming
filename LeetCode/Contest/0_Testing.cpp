class Solution {
public:

bool islower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isupper(char c) {
    return c >= 'A' && c <= 'Z';
}

  string tolower(string str) {
    for (int i = 0; i < str.size(); i++) {
      if (isupper(str[i])) {
        str[i] = str[i] + 32;
      }
    }
    return str;
    }

  char toupper(char c) {
    if (islower(c)) {
      return c - 32;
    }
    return c;
    }



    string greatestLetter(string s) {
        int n=s.size();
       sort(s.begin(), s.end());
       vector<char> v;
       vector<char> v2;
       string ans="";
       //all samall letters push in v1
         for (int i = 0; i < s.size(); i++) {
            if (islower(s[i])) {
              v.push_back(s[i]);
            }
         }
            //all big letters push in v2
            for (int i = 0; i < s.size(); i++) {
                if (isupper(s[i])) {
                    v2.push_back(s[i]);
                }
                }

                //sort v1 and v2
                sort(v.begin(), v.end());
                sort(v2.begin(), v2.end());

                 reverse(v.begin(), v.end());
                reverse(v2.begin(), v2.end());

                //convert all small letters to big letters
                for (int i = 0; i < v.size(); i++) {
                    v[i] = toupper(v[i]);
                }


                // for(int i=0;i<v.size();i++){
                //     ans+=v[i];
                // }

                // for(int i=0;i<v2.size();i++){
                //     ans+=v2[i];
                // }



               

                //if v2[i] is present in v1, then push it in ans
                for(int i=0;i<v2.size();i++){
                    if(find(v.begin(),v.end(),v2[i])!=v.end()){
                        ans+=v2[i];
                        break;
                    }
                }

                return ans;

               


        
    }
};