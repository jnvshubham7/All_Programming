/*
 * @lc app=leetcode id=363 lang=cpp
 *
 * [363] Max Sum of Rectangle No Larger Than K
 */

// @lc code=start
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        // int n=matrix.size();
        // int m=matrix[0].size();
    //    vector<int> sum;
    //    //all possible submatrix sum in vector
    //      for(int i=0;i<n;i++)
    //      {
    //           for(int j=0;j<m;j++)
    //           {
    //             int temp=0;
    //             for(int p=i;p<n;p++)
    //             {
    //                  for(int q=j;q<m;q++)
    //                  {
    //                       temp+=matrix[p][q];
    //                       sum.push_back(temp);
    //                  }
    //             }
    //           }
    //      }
    //     sort(sum.begin(),sum.end());
    //     int ans=INT_MIN;
    //     for(int i=0;i<sum.size();i++)
    //     {
    //         if(sum[i]<=k)
    //         {
    //             ans=max(ans,sum[i]);
    //         }
    //         else
    //         {
    //             int index=upper_bound(sum.begin(),sum.end(),k-sum[i])-sum.begin();
    //             if(index>0)
    //             {
    //                 ans=max(ans,sum[index-1]+sum[i]);
    //             }
    //         }
    //     }
    //     return ans;

      


    
        
    }
};
// @lc code=end


















 int max_sum = INT_MIN, m=matrix.size(), n=matrix[0].size() ;
       
       int subarr[m];
        for(int l=0; l<n; l++) {
            memset(subarr,0,sizeof(subarr));
            for(int r=l; r<n; r++) {
                for(int i=0; i<m; i++) subarr[i] += matrix[i][r];
                for(int i=0; i<m; i++) {
                    int sum = 0;
                    for(int j=i; j<m; j++) {
                        sum += subarr[j];
                        if(sum > max_sum && sum <=k) max_sum = sum;
                    }
                }
            }
        }
        return max_sum;