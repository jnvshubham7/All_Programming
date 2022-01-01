class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int n=a.size();
        vector<int>ans(n);
        int i=0;
        int j=n-1;
        int k=n-1;
        
        while(i<=j)
        {
            if(abs(a[i])>=abs(a[j]))
            {
                ans[k] = a[i]*a[i];
                i++;
            }
            else
            {
                ans[k] = a[j]*a[j];
                j--;
            }
            k--;
        }
        
        return ans;
    }
};