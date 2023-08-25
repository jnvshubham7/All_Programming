class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int indx = -1;

        for (int i = 1; i < n - 1; i++) {
            if (nums[i - 1] <= 0 && nums[i] >= 0) {
                indx = i;
                break; // Exit loop once the index is found
            }
        }

        int i = indx - 1, j = indx + 1;

        vector<int> ans(n);

        if(indx==-1)
        {

            if(nums[0]<0)
            {
                for(int i=0;i<n;i++)
                {
                    ans[i] = nums[n-i-1]*nums[n-i-1];
                }
                return ans;
            }
            else
            {
               for(int i=0;i<n;i++)
                {
                    ans[i] = nums[i]*nums[i];
                }
                return ans;
            }
            
        }

        ans[0] = nums[indx] * nums[indx];

        int idx = 1;

        while (i >= 0 && j < n) {
            int leftSquare = nums[i] * nums[i];
            int rightSquare = nums[j] * nums[j];

            if (leftSquare < rightSquare) {
                ans[idx++] = leftSquare;
                i--;
            } else {
                ans[idx++] = rightSquare;
                j++;
            }
        }

        while (i >= 0) {
            ans[idx++] = nums[i] * nums[i];
            i--;
        }

        while (j < n) {
            ans[idx++] = nums[j] * nums[j];
            j++;
        }

        return ans;
    }
};
