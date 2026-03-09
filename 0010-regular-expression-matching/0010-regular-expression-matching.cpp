// Solution no.3 - Bottom-Up DP (Tabulation)
class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length(), m = p.length();
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
        dp[n][m] = true;
        for (int i = n; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                bool first_match = (i < n && (p[j] == s[i] || p[j] == '.'));
                if (j + 1 < m && p[j + 1] == '*') {
                    dp[i][j] = dp[i][j + 2] || (first_match && dp[i + 1][j]);
                } else {
                    dp[i][j] = first_match && dp[i + 1][j + 1];
                }
            }
        }
        return dp[0][0];
    }
};