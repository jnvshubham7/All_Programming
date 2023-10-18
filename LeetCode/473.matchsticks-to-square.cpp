/*
 * @lc app=leetcode id=473 lang=cpp
 *
 * [473] Matchsticks to Square
 */

// @lc code=start
class Solution {
public:
   
bool makesquare(vector<int>& x) {

    int n=x.size();



   
}
    
};
// @lc code=end


























//   if(matchsticks.size()==0)
//         return false;
    
//     int sum=0;
//     for(int i=0; i<matchsticks.size(); i++)
//     {
//         sum+=matchsticks[i];
//     }
    
//     int target=sum/4;
    
//     vector<int> dp_sides(4,0);
    
//     sort(matchsticks.begin(), matchsticks.end(), greater<int>()); //optimization 2
    
//     return dfs(matchsticks, 0, target, dp_sides);
// }


// bool dfs(vector<int>& matchsticks, int index, int target, vector<int>& dp_sides)
// {
//     if(index==matchsticks.size())
//         return true;
    
//     for(int i=0; i<4; i++)
//     {
//         if(dp_sides[i]+matchsticks[index]<=target)
//         {
//             dp_sides[i]+=matchsticks[index];
//             //print dp_sides;
//             for(int j=0; j<4; j++)
//             {
//                 cout<<dp_sides[j]<<" ";
//             }
//             cout<<endl;
//             if(dfs(matchsticks, index+1, target, dp_sides))
//                 return true;
//             dp_sides[i]-=matchsticks[index];

//             //print dp_sides;
//             for(int j=0; j<4; j++)
//             {
//                 cout<<dp_sides[j]<<" ";
//             }
//             cout<<endl;

//         }
//     }

    
//     return false;

// }
