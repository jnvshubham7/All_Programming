class Solution {
public:
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>

    vector<vector<int>> ans;



    

//                         []
//             /                       \
//    [1]                                 []           <-- Take 1, Not Take 1
//    /   \                                /   \
// [1,2] [1]                            [2]  []        <-- Take 2, Not Take 2
//  / \   / \                           / \   / \
// [1,2,3] [1,2] [1,3]  [1]                [2,3] [2] [] [3]    <-- Take 3, Not Take 3





    
    void sub(vector<int> &nums, int i, vector<int> temp)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        //not take
        sub(nums, i+1, temp);

        temp.push_back(nums[i]);


        //take
        sub(nums, i+1, temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;       
        sub(nums, 0, temp); // or sub(nums, 0, vector<int> {});
        return ans;
    }
 


};
