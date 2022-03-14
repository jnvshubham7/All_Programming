class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {


for(int i = digits.size() - 1;i >= 0;i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;













        //add 1 to digit then return 

        // int carry = 1;
        // int i = digits.size() - 1;
        // while(i >= 0 && carry)
        // {
        //     digits[i] += carry;
        //     carry = digits[i] / 10;
        //     digits[i] %= 10;
        //     i--;
        // }
        // if(carry)
        // {
        //     digits.insert(digits.begin(), carry);
        // }
        // return digits;


        
        
    }
};