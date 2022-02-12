
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function that returns the maximum
// number of envelopes that can be
// inserted into another envelopes
int maxEnvelopes(vector<vector<int> >& envelopes)
{
    // Number of envelopes
    int N = envelopes.size();
 
    if (N == 0)
        return N;
 
    // Sort the envelopes in increasing
    // order of width and decreasing order
    // of height is width is same
    sort(envelopes.begin(), envelopes.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0]
                    or (a[0] == b[0] and a[1] > b[1]);
        });
 
    // To store the longest increasing
    // sequence of height
    vector<int> dp;
 
    // Finding LIS of the heights
    // of the envelopes
    for (int i = 0; i < N; ++i) {
        auto iter = lower_bound(dp.begin(),
                                dp.end(),
                                envelopes[i][1]);
 
        if (iter == dp.end())
            dp.push_back(envelopes[i][1]);
        else if (envelopes[i][1] < *iter)
            *iter = envelopes[i][1];
    }
 
    // Return the result
    return dp.size()+1;
}
 
// Driver Code
int main()
{
    // Given the envelopes
    vector<vector<int> > envelopes
        = { { 5,4 }, { 6,4 }, { 6,7 }, { 2,3 } };
 
    // Function Call
    cout << maxEnvelopes(envelopes);
    return 0;
}