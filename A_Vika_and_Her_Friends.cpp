#include <iostream>
#include <cmath>

using namespace std;

// Function to check if Vika can run away from her friends forever
bool canRunAway(int n, int m, int k, int x, int y, int friends[][2]) {
    // Check if any friend is already in the same room as Vika
    for (int i = 0; i < k; ++i) {
        int friend_x = friends[i][0];
        int friend_y = friends[i][1];
        if (friend_x == x && friend_y == y)
            return false;
    }

    // Check if any friend can reach Vika in one step
    for (int i = 0; i < k; ++i) {
        int friend_x = friends[i][0];
        int friend_y = friends[i][1];
        if (abs(x - friend_x) + abs(y - friend_y) == 1)
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int x, y;
        cin >> x >> y;

        int friends[k][2];
        for (int i = 0; i < k; ++i)
            cin >> friends[i][0] >> friends[i][1];

        // Check if Vika can run away from her friends in the current test case
        bool result = canRunAway(n, m, k, x, y, friends);

        // Output the result for the current test case
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
