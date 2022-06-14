class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        //sum all the elements in the vector

        int max=0;

        int sum=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
            sum=0;
        }
        return max;




        //one inside vector add all the elements of the vector
        //compare the max of the vector
        
        int max=0;

        //check maximum wealth of each account
        //create two loop i and j
        //i is the outer loop
        //j is the inner loop

        //check sum of all j elements in ith group of accounts
        //if sum is greater than max then max=sum
        //if sum is less than max then continue








        

        
    }
};