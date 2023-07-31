#include <iostream>
#include <vector>
using namespace std;

int find_most_entertaining_video(int n, int t, const vector<int>& durations, const vector<int>& entertainment) {
    int most_entertaining_index = -1;
    int max_entertainment = 0;

    for (int i = 0; i < n; i++) {
        if (durations[i] <= t && entertainment[i] > max_entertainment) {
            max_entertainment = entertainment[i];
            most_entertaining_index = i + 1; // Add 1 to convert 0-based index to 1-based index
        }
    }

    return most_entertaining_index;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n, t;
        cin >> n >> t;

        vector<int> durations(n);
        for (int i = 0; i < n; i++) {
            cin >> durations[i];
        }

        vector<int> entertainment(n);
        for (int i = 0; i < n; i++) {
            cin >> entertainment[i];
        }

        int result = find_most_entertaining_video(n, t, durations, entertainment);
        cout << result << endl;
    }

    return 0;
}
