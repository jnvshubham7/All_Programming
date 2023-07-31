/*
 * @lc app=leetcode id=473 lang=cpp
 *
 * [473] Matchsticks to Square
 */

// @lc code=start
class Solution {
public:
   
bool makesquare(vector<int>& matchsticks) {

   
    //use stl to get the sum of all the matchsticks
   int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);

    if(sum % 4 != 0)
    return false;

    int side= sum/4;

    sort(matchsticks.begin(), matchsticks.end(), greater<int>());

    return isSquare(0, side,side, side, side, matchsticks);

   
    }

    bool isSquare(int i, int s1, int s2, int s3, int s4, vector<int>& matchsticks)
    {
        if(i == matchsticks.size())
        {
           if(s1==0 && s2==0 && s3==0 && s4==0)
           {
                return true;
              }
              else
              {
                return false;
              }
           


        }



        if(matchsticks[i]<=s1)
        {
            s1-=matchsticks[i];
            if(isSquare(i+1, s1, s2, s3, s4, matchsticks))
            {
                return true;
            }
            s1+=matchsticks[i];
        }
        if(matchsticks[i]<=s2)
        {
            s2-=matchsticks[i];
            if(isSquare(i+1, s1, s2, s3, s4, matchsticks))
            {
                return true;
            }
            s2+=matchsticks[i];
        }

        if(matchsticks[i]<=s3)
        {
            s3-=matchsticks[i];
            if(isSquare(i+1, s1, s2, s3, s4, matchsticks))
            {
                return true;
            }
            s3+=matchsticks[i];
        }

        if(matchsticks[i]<=s4)
        {
            s4-=matchsticks[i];
            if(isSquare(i+1, s1, s2, s3, s4, matchsticks))
            {
                return true;
            }
            s4+=matchsticks[i];
        }
        return false;

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
