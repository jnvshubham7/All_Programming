#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> balls(M);
        for (int i = 0; i < M; ++i) {
            cin >> balls[i];
        }

        sort(balls.rbegin(), balls.rend()); // Sort in descending order

        int total_balls = 0;
        int min_boxes_with_M_balls = 0;

        for (int i = 0; i < M; ++i) {
            total_balls += balls[i];
            min_boxes_with_M_balls = max(min_boxes_with_M_balls, min(total_balls, i + 1));
        }

        cout << min_boxes_with_M_balls << endl;
    }

    return 0;
}
