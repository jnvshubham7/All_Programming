class Solution {
public:

//dfs function dfs(matrix,dp,i,j)

      







  




   int dfs(vector<vector<int>>& matrix,vector<vector<int>>& dp,int i,int j)
   {
       

   }





    int longestIncreasingPath(vector<vector<int>>& matrix) {

        if(matrix.size()==0) return 0;
        int m=matrix.size();
        int n=matrix[0].size();
        int res=0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res=max(res,dfs(matrix,dp,i,j));
            }
        }
        return res;


        
    }
};