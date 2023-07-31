/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2432] The Employee That Worked on the Longest Task
 */

// @lc code=start
class Solution {
public:
     static bool compare(pair<int,int> p1,pair<int,int> p2)
     {
        if(p1.second==p2.second)
        {
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
     }

    int hardestWorker(int l, vector<vector<int>>& logs) {

        //sort vectopr by 2nd element

        int n=logs.size();
        int m=logs[0].size();

    //    for(int i=1;i<n;i++)
    //    {
    //           for(int j=0;j<m;j++)
    //           {

    //               //diff 
    //               logs[i+1][1]= logs[i+1][1]-logs[i][1];
              
    //           }
    //    }

       //print 

    //    for(auto i:logs)
    //      {
    //           for(auto j:i)
    //           {
    //             cout<<j<<" ";
    //           }
    //           cout<<endl;
    //         }




       

       //print logs

        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i].first=logs[i][0];
            v[i].second=logs[i][1];
        }
         for(auto i:v)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }

        for(int i=1;i<n;i++)
        {
            v[i].second=v[i].second-logs[i-1][1];
        }
         for(auto i:v)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }

        sort(v.begin(),v.end(),compare);
        // print vector
        

        for(auto i:v)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }


        //cout<<v[0][0]<<endl;
        return v[0].first;
    }
};
// @lc code=end

