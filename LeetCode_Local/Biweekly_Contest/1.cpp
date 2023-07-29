class Solution {
public:
    int buyChoco(vector<int>& p, int m) {

        sort(p.begin(), p.end());

        int sum=p[0]+p[1];

        if(m-sum >=0)
        {
            return m-sum;
        }

        else {
            return 0;
        }

        
        
    }
};