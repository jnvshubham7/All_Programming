class Solution {
public:
    vector<string> cellsInRange(string s) {

       // You are given a string s in the format "<col1><row1>:<col2><row2>"
       //store row and column 
         int col1 = s[0] - 'A';
            int row1 = s[1] - '1';

            //return all the cells in the range
            vector<string> res;
            int col2 = s[3] - 'A';
            int row2 = s[4] - '1';
            for(int i = col1; i <= col2; i++)
            {
                for(int j = row1; j <= row2; j++)
                {
                    res.push_back(string(1, 'A' + i) + string(1, '1' + j));
                }
            }
            return res;
            



       

       



       
        
    }
};