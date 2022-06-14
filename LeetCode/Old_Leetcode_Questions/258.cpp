class Solution {
public:
    int addDigits(int num) {
        //all digit store in vector 
        vector<int> digit;
        while(num != 0){
            digit.push_back(num%10);
            num = num/10;
        }
        int sum = 0;
        for(int i = 0; i < digit.size(); i++){
            sum += digit[i];
        }
        while(sum >= 10){
            sum = addDigits(sum);
        }
        return sum;
        
        
    }
};