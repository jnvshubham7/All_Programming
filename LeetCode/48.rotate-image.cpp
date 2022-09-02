/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
    




// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

         int n=matrix.size();
         

  vector<vector<int>> temp(matrix);
    int size=matrix.size();
    for(int i=0;i<size;i++)
        for(int j=0; j<size;j++)
            matrix[i][j] = temp[n-j-1][i];


         
        
    }
};
// @lc code=end






int main(){
Solution s;

int n;
cin>>n;
while(n--)
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
   fr(i,m)
    {
         fr(j,n)
         {
              cin>>matrix[i][j];
         }
    }

    s.rotate(matrix);
   fr(i,m)
    {
        fr(j,n)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    

    //input 2
   
    // output 2
    // 5 4 3 2 1
    // 6 5 4 3 2
    // 7 6 5 4 3
    // 8 7 6 5 4
    // 9 8 7 6 5

}
    




    return 0;
}















//   vector<vector<int>> temp(matrix);
//     int size=matrix.size();
//     for(int i=0;i<size;i++)
//         for(int j=0; j<size;j++)
//             matrix[i][j] = temp[n-j-1][i];