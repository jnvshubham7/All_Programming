class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans;
        int i=0;
        int j=n;
        for(int k=0;k<n*2;k++)
        {
            if(k%2==0)
            {
                ans.push_back(nums[i]);
                i++;
            }
            else
            {
                ans.push_back(nums[j]);
                j++;
            }
        }
        return ans;

//     unordered_map<int,int> m;


//     for(int i=0;i<n;i++)
//     {

//         //all odd postion in unordered_map put this value
//         m[i*2+1]=nums[i];
//     }

//     for(int i=n;i<2*n;i++)
//     {
//         //all even postion in unordered_map put this value
//         m[i*2]=nums[i];

//     }

//      vector<int> ans;

//     for(auto it=m.begin();it!=m.end();it++)
//     {
//         ans.push_back(it->second);
//     }

//     //reverse vector
//    // reverse(ans.begin(),ans.end());

//     return ans;

   // return m;




        
       // vector<int> v;
        
        // for(int i=0;i<n;i++)
        // {
        //    v.push_back(nums[i]);
            
        // }
        
        //  for(int j=n;j<2*n;j++)
        //     {
                

        //         v.push_back(nums[j]);

               
                
        //     }
        
     // return v;
        
    }
};