/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

 #include<bits/stdc++.h>
 using namespace std;
 

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();

        


    }
};
// @lc code=end



int main()
{




    string s = "abcdefdhs";
    int ind = 0;

    vector<vector<char>> mt(3, vector<char>(3, 0));

    // Fill the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mt[i][j] = s[ind];
            ind++;
        }
    }

    // Print column-wise
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mt[j][i] << " ";
        }
        cout << endl;
    }





    // int n,m;
    // cin>>n>>m;

    // int mt[n][m];

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cin>>mt[i][j];
    //     }
    // }





    // vector<vector<int>> mt(n, vector<int>(m,0));

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cin>>mt[i][j];
    //     }
    // }

    //print

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<mt[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Solution s;



    // vector<vector<int>> mat;

    // int n,m;

    // cin>>n>>m;

    // for(int i=0;i<n;i++)
    // {
    //     vector<int> temp;
    //     for(int j=0;j<m;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         temp.push_back(x);
    //     }
    //     mat.push_back(temp);
    // }

    // //print

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Solution s;







}


//example

// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
