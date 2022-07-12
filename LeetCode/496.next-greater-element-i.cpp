/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1=nums1.size();
        int n2=nums2.size();

         vector<pair<int,int>> v;



        stack<int> st;

      for(int i=n2-1;i>=0;i--)
      {
        if(st.empty())
        {
           v.push_back(make_pair(nums2[i],-1));
        }
        else if(st.top()>nums2[i])
        {
            v.push_back(make_pair(nums2[i],st.top()));
           
        }
       else {

          while(!st.empty() && st.top()<=nums2[i])
          {
              st.pop();
          }
            if(st.empty())
            {
                v.push_back(make_pair(nums2[i],-1));
            }
            else
            {
                v.push_back(make_pair(nums2[i],st.top()));
            }



       }

        st.push(nums2[i]);  
        
      }

        //print v
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        vector<int> ans;

        for(int i=0;i<n1;i++)
        {
            int flag=0;
            for(int j=0;j<v.size();j++)
            {
                if(nums1[i]==v[j].first)
                {
                    ans.push_back(v[j].second);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                ans.push_back(-1);
            }
        }
        





        return ans;



      
    }
};
// @lc code=end

