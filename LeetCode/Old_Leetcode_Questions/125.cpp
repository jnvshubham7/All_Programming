class Solution {
public:
    bool isPalindrome(string s) {




//A phrase is a palindrome if, 
//after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,

//check string s is palindrome.

for(int i=0;i<s.size();i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        s[i]=s[i]+32;
    }
    if(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='0'&&s[i]<='9'))
    {
        s.erase(i,1);
        i--;

    }
}
int i=0,j=s.size()-1;
while(i<j)
{
    if(s[i]!=s[j])
    {
        return false;
    }
    i++;
    j--;
}






        // int i = 0, j = s.size() - 1;
        // while (i < j) {
        //     if (s[i] != s[j]) return false;
        //     i++;
        //     j--;
        // }
        // return true;
        
    }
};