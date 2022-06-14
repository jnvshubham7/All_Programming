class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        ans.push_back(temp);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int size = ans.size();
            for(int j = 0; j < size; j++)
            {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
        


        




        //all possinle combination of subset store in unordered_set
    //     unordered_set<int> s;
    //    for(int i=0;i<nums.size();i++){
    //        for(int j=0;j<=i;j++){
    //            s.insert(nums[i]);
    //        }
    //      }
    //     vector<vector<int>> v;

        //convert unordered_set to vector
        // for(auto it=s.begin();it!=s.end();it++){
        //     vector<int> v1;
        //     v1.push_back(*it);
        //     v.push_back(v1);
        // }
        // return v;



       // return vector<vector<int>>(s.begin(),s.end());


        //store all possinle combination of subset in vector
        // vector<vector<int>> v;
        // for(auto it=s.begin();it!=s.end();it++){
        //     v.push_back(*it);
        // }
        // return v;






       
        
    }
};