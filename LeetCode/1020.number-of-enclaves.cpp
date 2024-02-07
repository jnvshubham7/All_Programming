class Solution {
public:
    int numEnclaves(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1 && g[i][j] == 1) {
                    rec(i, j, g, n, m);
                }
            }
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == 1) {
                    cnt++;
                }
            }
        }

        return cnt;
    }

    void rec(int i, int j, vector<vector<int>>& g, int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m || g[i][j] == 0) {
            return;
        }

        g[i][j] = 0;

        rec(i + 1, j, g, n, m);
        rec(i, j + 1, g, n, m);
        rec(i - 1, j, g, n, m);
        rec(i, j - 1, g, n, m);
    }
};
