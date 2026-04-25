class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        int n = mat[0].size();

        // 1️⃣ Build 2D prefix sum
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                prefix[i][j] =
                    mat[i - 1][j - 1]
                    + prefix[i - 1][j]
                    + prefix[i][j - 1]
                    - prefix[i - 1][j - 1];
            }
        }

        // 2️⃣ Binary search on side length
        int low = 0, high = min(m, n), ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;  // current side length
            bool found = false;

            // 3️⃣ Check all squares of size mid x mid
            for (int i = mid; i <= m && !found; i++) {
                for (int j = mid; j <= n; j++) {
                    int squareSum =
                        prefix[i][j]
                        - prefix[i - mid][j]
                        - prefix[i][j - mid]
                        + prefix[i - mid][j - mid];

                    if (squareSum <= threshold) {
                        found = true;
                        break;
                    }
                }
            }

            // 4️⃣ Adjust binary search
            if (found) {
                ans = mid;       // mid is possible
                low = mid + 1;   // try bigger square
            } else {
                high = mid - 1;  // try smaller square
            }
        }

        return ans;
    }
};