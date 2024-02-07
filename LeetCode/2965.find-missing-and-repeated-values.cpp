class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {

        int n = g.size();

        int m = g[0].size();

        int x,y;

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[g[i][j]]++;
            }
        }


        int sq = n*n;

        for(int i=0;i<=sq;i++)
        {
            if(mp[i]==0)
            {
                x=i;
            }

            if(mp[i]==2)
            {
                y=i;
            }

        }

        // vector<int> v;

        // v.push_back(x);
        // v.push_back(y);

        // sort(v.begin(),v.end());


        return {y,x};







       



       
    }
};
