/*
 * @lc app=leetcode id=1642 lang=cpp
 *
 * [1642] Furthest Building You Can Reach
 */

// @lc code=start
class Solution {
public:
    int furthestBuilding(vector<int>& height, int bricks, int ladders) {

        int sum=0;

        priority_queue<int> pq;

        int i=0;

        while(i<height.size()-1)
        {
            if(height[i]>=height[i+1])
            {
               // i++;
            }
            else {
                sum+=height[i+1]-height[i];
                pq.push(height[i+1]-height[i]);

                while(sum>bricks && ladders>0)
                {
                    sum-=pq.top();
                    pq.pop();
                    ladders--;
                }

                if(sum>bricks && ladders==0)
                {
                    break;
                }
            }
            i=i+1;

        }

        return i;

        // int ans=0;

        // int n=heights.size();
        // for(int i=0;i<n-1;i++)
        // {
        //     if(heights[i]>=heights[i+1])
        //     {
        //         i++;
        //     }
        //    else  if(heights[i+1]-heights[i]>=bricks)
        //     {
        //         bricks-=(heights[i+1]-heights[i]);
        //         cout<<bricks<<endl;
        //        // cout<<i<<endl;
        //         i++;
                

        //         if(bricks==0)
        //         {
        //             ans=i;
        //             break;
        //         }
                


        //     }
        //     else {

        //          ladders--;
        //          cout<<ladders<<endl;
                 
        //     i++;
        //     //cout<<i<<endl;
        //     if(ladders==0)
        //     {
        //         ans=i;
        //         break;
        //     }

        //     }

        // }

        // return ans-1;

      


        
    }
};
// @lc code=end

