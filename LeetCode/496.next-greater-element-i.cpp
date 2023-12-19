/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3=nums2;

        stack<int> s;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                nums3[i]=-1;
            }else{
                nums3[i]=s.top();
            }
            s.push(nums2[i]);
        }


        //print the nums3

        for(auto i:nums3){
            cout<<i<<" ";
        }





        unordered_map<int,int> m;

        for(int i=0;i<nums2.size();i++){
            m[nums2[i]]=nums3[i];
        }

        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }

        

        vector<int> ans;

        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }

        return ans;







    }
};

// time complexity: O(n)
// space complexity: O(n)
// @lc code=end

