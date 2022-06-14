class Solution {
public:

// create isupper() function
bool isupper(char c) {
    return c >= 'A' && c <= 'Z';
}
    bool detectCapitalUse(string word) {

        //if all char in word is  capital then return true 
        //if all char in word is  small then return true
        //if first char is capital and rest of the char is small then return true

        int count=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                count++;
            }
        }
        if(count==word.length()){
            return true;
        }
        if(count==0){
            return true;
        }
        if(count==1 && isupper(word[0])){
            return true;
        }
        return false;







    }

};