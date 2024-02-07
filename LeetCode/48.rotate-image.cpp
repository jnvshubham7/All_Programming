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
      reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++) {
            for(int j=i+1;j<matrix.size();j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};
// @lc code=end






int main(){
Solution s;


   



   


   
//    int n,m;
//     cin>>n>>m;


//    vector<vector<int>> mt(n, vecotr<int> (m, 0));

//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//         cin>>mt[i][j];
//     }

//    }

//    s.rotate(mt);

//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<m;j++)
//     {
//         cout<<mt[i][j]<<" ";
//     }
//     cout<<endl;
//    }

   //print 












  





    //input 2
   
    // output 2
    // 5 4 3 2 1
    // 6 5 4 3 2
    // 7 6 5 4 3
    // 8 7 6 5 4
    // 9 8 7 6 5


    




    return 0;
}















//   vector<vector<int>> temp(matrix);
//     int size=matrix.size();
//     for(int i=0;i<size;i++)
//         for(int j=0; j<size;j++)
//             matrix[i][j] = temp[n-j-1][i];