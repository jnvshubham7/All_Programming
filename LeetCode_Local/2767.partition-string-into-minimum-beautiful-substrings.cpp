class Solution {
public:
    // bool isBeautiful(string s) {
    //     int decimal = stoi(s, nullptr, 2);
    //     int power = 1;
    //     while (power < decimal) {
    //         power *= 5;
    //     }
    //     return power == decimal;
    // }



int binaryToDecimal(const std::string& binaryString) {
    int decimal = 0;
    int power = 0;
    
    // Start from the rightmost character (LSB) of the binary string
    for (int i = binaryString.length() - 1; i >= 0; --i) {
        // Convert character to integer
        int bit = binaryString[i] - '0';
        
        // Update the decimal value by adding the contribution of the current bit
        decimal += bit * pow(2, power);
        
        // Increment the power by 1 for the next bit
        ++power;
    }
    
    return decimal;
}


    
bool isBeautiful(const std::string& binaryNumber) {
    // Convert binary string to decimal representation
    int decimalNumber = binaryToDecimal(binaryNumber);

    // Check if the decimal number is a power of 5
    while (decimalNumber > 1) {
        if (decimalNumber % 5 != 0)
            return false;
        decimalNumber /= 5;
    }

    return decimalNumber == 1;
}
    
    int partitionBeautiful(string s, int index) {
        if (index == s.length()) {
            return 0;
        }
        
        int minPartitions = INT_MAX;
        for (int i = index; i < s.length(); i++) {
            string substring = s.substr(index, i - index + 1);
            if (isBeautiful(substring)) {
                int remainingPartitions = partitionBeautiful(s, i + 1);
                minPartitions = min(minPartitions, remainingPartitions + 1);
            }
        }
        
        return minPartitions;
    }





    
    int minimumBeautifulSubstrings(string s) {
        int result = partitionBeautiful(s, 0);
        return (result == INT_MAX) ? -1 : result;
    }
};