class Solution {
public:
    int percentageLetter(string s, char letter) {
        // Given a string s and a character letter, 
        // return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

        //store frequency letter in s
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == letter) {
                count++;
            }
        }

        //calculate percentage
        int percentage = count * 100 / s.length();

        return percentage;
        
    }
};