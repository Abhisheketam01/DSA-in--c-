// Solution no.3 - Bottom-Up DP (Tabulation)
class Solution {
public:
    // test case - s = "a", p = "a*b*"
    bool isMatch(string s, string p) {
        // n = 1 and m = 4
        int n = s.length(), m = p.length();
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
        /*
        Grid Table of 2 x 5
        at i = 1 there is nothing which means a place that is after a which is nothing in s
        It marks the very last cell dp[1][4] as T (True) because an empty string matches an empty pattern. Everything else starts as F (False).
        j is p => 0 = a 1 = * 2 = b 3 = *
             s => 0 = a
        ij  0  1  2  3  4
        0   T  F  F  F  F(skip)
        1   T  F  T  F  T

        i = 1
        For loop is for(int i = n; i >= 0; i--) which means that i starts at i = n = 1 , which is >= 0 ; so the loop will run
        now the system is checking is a*b* matches with nothing ?
        sudden at j = 2 which is b then it sees a star which is p[j+1] == "*" (j = 3)
        dp[1][4] ==  true;
        we skip b* = char*
        now the 1 is done.

        now we moving i = 0
        Now the loop moves to $i=0$ (the character 'a').
        the loop again will start from j  = 2 ( actually the j is 0 1 2 3 since j = m - 1 ; we get j = 2)
        at i = 0 it is "a"
        ar j = 2 it is 2*
        
        then firstMatche = is 'a' == 'b' no then it remains false;
        dp[0][2] == false; stays false 
        at j == 0 (a*)
        sp[0][2] == false;
        firstmatch is a == a then its true
        */
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