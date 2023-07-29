//Given a positive integer num represented as a string, return the integer num without trailing zeros as a string.

class Solution {
public:
    string removeTrailingZeros(string num) {

        int i = num.length() - 1;
        while (num[i] == '0') {
            i--;
        }
        return num.substr(0, i + 1);
        
    }
};