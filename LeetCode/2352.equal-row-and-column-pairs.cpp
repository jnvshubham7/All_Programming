/*
 * @lc app=leetcode id=2352 lang=cpp
 *
 * [2352] Equal Row and Column Pairs
 */

// @lc code=start
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

    int equalPairs(vector<vector<int>>& grid) {

         int n=grid.size();
               int m=grid[0].size();

                  vector<vector<int>> row;
               vector<vector<int>> col;

               //pritn grid
            //    for(int i=0;i<n;i++)
            //    {
            //        for(int j=0;j<m;j++)
            //        {
            //            cout<<grid[i][j]<<" ";
            //        }
            //        cout<<endl;
            //    }
            //     cout<<endl;


            for(int i=0;i<n;i++)
            {
                vector<int> v;
                for(int j=0;j<m;j++)
                {
                    v.pb(grid[i][j]);
                }
                row.pb(v);

                
            }

            for(int i=0;i<m;i++)
            {
                vector<int> v;
                for(int j=0;j<n;j++)
                {
                    v.pb(grid[j][i]);
                }
                col.pb(v);
            }

            // return the number of pairs (Ri, Cj) such that row Ri and column Cj are equal.

            int count=0;
             int x=0;
             int flag=0;

          //find the number of equal row and column pairs
          //if all the elements in row are equal to all the elements in column then increment count by 1
           for(int i=0;i<row.size();i++)
           {
            vector<int> v=row[i];

            for(int j=0;j<v.size();j++)
            {
                
            }

          
            for(int j=0;j<v.size();j++)
            {
                vector<int> v1=col[j];
                // if(equal(v,v1))
                // {
                //     count++;
                    
                // }
                if(v==v1)
                {
                    count++;
                    
                }


            }
            
           }

           return count;



    }

    bool equal(vector<int> &v1,vector<int> &v2)
    {
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            {
                return false;
            }
        }
        return true;
    }



        
    
};
// @lc code=end

