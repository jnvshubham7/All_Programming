#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int  maxPeopleInOffice(vector<int>& swipes) {
        unordered_map<int, int> entryExit;
        int maxPeople = 0;
        int currentPeople = 0;
        
        for (int swipe : swipes) {
            if (entryExit.find(swipe) == entryExit.end()) {
                entryExit[swipe] = 1; // New entry
                currentPeople++;
            } else {
                entryExit.erase(swipe); // Exiting the office
                currentPeople--;
            }
            
            maxPeople = max(maxPeople, currentPeople);
        }
        
        return maxPeople;
    }
};

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> swipes(N);
        
        for (int i = 0; i < N; i++) {
            cin >> swipes[i];
        }
        
        Solution solution;
        int maxPeople = solution.maxPeopleInOffice(swipes);
        cout << maxPeople << endl;
    }
    
    return 0;
}
