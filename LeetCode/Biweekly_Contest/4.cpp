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
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>


#include <vector>
#include <algorithm>

class Solution {
public:
    long long maxStrength(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<long long> positivePrefix(n);
        std::vector<long long> negativePrefix(n);

        positivePrefix[0] = std::max(0, nums[0]);
        negativePrefix[0] = std::min(0, nums[0]);
        long long maxStrength = positivePrefix[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] >= 0) {
                positivePrefix[i] = std::max(static_cast<long long>(nums[i]), positivePrefix[i - 1] * nums[i]);
                negativePrefix[i] = negativePrefix[i - 1] * nums[i];
            } else {
                positivePrefix[i] = negativePrefix[i - 1] * nums[i];
                negativePrefix[i] = std::min(static_cast<long long>(nums[i]), positivePrefix[i - 1] * nums[i]);
            }
            maxStrength = std::max(maxStrength, positivePrefix[i]);
        }

        return maxStrength;
    }
};



int main() {
    Solution solution;
    std::vector<int> nums = {9, -3, 2, -5, -2, -9, -8, -4, 5, -3};
    long long maxStrength = solution.maxStrength(nums);
    std::cout << maxStrength << std::endl;
    return 0;
}

