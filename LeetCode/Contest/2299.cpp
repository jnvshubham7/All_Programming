class Solution {
public:
    bool strongPasswordCheckerII(string s) {

//         A password is said to be strong if it satisfies all the following criteria:

// It has at least 8 characters.
// It contains at least one lowercase letter.
// It contains at least one uppercase letter.
// It contains at least one digit.
// It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
// It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).
// Given a string password, return true if it is a strong password. Otherwise, return false.

        int n = s.length();
        int count = 0;
       int lower_count = 0;
         int upper_count = 0;
            int digit_count = 0;
                int special_count = 0;
                  
       

       
       if(n<8)
         {
              return false;
         }
         //if adjacent characters are same return false
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                return false;
            }
        }


        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                lower_count++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                upper_count++;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                digit_count++;
            }
            else
            {
                special_count++;
            }
        }

        if(lower_count==0 || upper_count==0 || digit_count==0 || special_count==0)
        {
            return false;
        }




        return true;






        
       

       


        
    }
};