// solution no.1 1. The Recursive Approach (Brute Force)
//You said what tf is substr bro ? Gemini said In C++, substr (short for "substring") is a built-in function used to cut out a portion of a string.
class Solution {
public:
    bool isMatch(string s, string p) {
        if (p.empty()) return s.empty();
        bool first_match = (!s.empty() && (p[0] == s[0] || p[0] == '.'));
        if (p.length() >= 2 && p[1] == '*') {
            return isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p));
            // case 1 || case 2
            // in case 1 it skips char*
            // in case 2  is says char* then that char can repeat itself no matter how much times we consider all of them = *
        } else {
            return first_match && isMatch(s.substr(1), p.substr(1));
        }
    }
};






// Solution no.3 - Bottom-Up DP (Tabulation)
// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         int n = s.length(), m = p.length();
//         // dp[i][j] means s[i:] matches p[j:]
//         vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

//         // BASE CASE: Empty string matches empty pattern.
//         dp[n][m] = true;

//         // OPERATION: Fill table from right to left. Time: O(N*M)
//         for (int i = n; i >= 0; i--) {
//             for (int j = m - 1; j >= 0; j--) {
//                 // Check current match
//                 bool first_match = (i < n && (p[j] == s[i] || p[j] == '.'));

//                 if (j + 1 < m && p[j + 1] == '*') {
//                     // Logic: Match 0 (dp[i][j+2]) OR Match 1+ (first_match && dp[i+1][j])
//                     dp[i][j] = dp[i][j + 2] || (first_match && dp[i + 1][j]);
//                 } else {
//                     dp[i][j] = first_match && dp[i + 1][j + 1];
//                 }
//             }
//         }
//         return dp[0][0];
//     }
// };

//solution no.2 Top-Down DP (Memoization)
// class Solution {
//     int memo[21][21]; // Operation: Fixed memory allocation | Space: O(N*M)

//     bool solve(int i, int j, string& s, string& p) {
//         // OPERATION: Table Lookup. Time: O(1)
//         if (memo[i][j] != -1) return memo[i][j];

//         // BASE CASE: Pattern finished. Time: O(1)
//         if (j == p.length()) return memo[i][j] = (i == s.length());

//         // OPERATION: Character comparison. Time: O(1)
//         bool first_match = (i < s.length() && (p[j] == s[i] || p[j] == '.'));

//         bool ans;
//         if (j + 1 < p.length() && p[j + 1] == '*') {
//             // OPERATION: Two-way branch with "OR". Time: O(1) per state
//             ans = solve(i, j + 2, s, p) || (first_match && solve(i + 1, j, s, p));
//         } else {
//             ans = first_match && solve(i + 1, j + 1, s, p);
//         }

//         return memo[i][j] = ans; // Save result
//     }

// public:
//     bool isMatch(string s, string p) {
//         memset(memo, -1, sizeof(memo)); // Operation: Reset table | Time: O(N*M)
//         return solve(0, 0, s, p);
//     }
// };



// // solution no.1 1. The Recursive Approach (Brute Force)
// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         // BASE CASE: If pattern is empty, string must be empty.
//         if (p.empty()) return s.empty();

//         // OPERATION: Check if first characters match.
//         // Time: O(1) | Space: O(1)
//         bool first_match = (!s.empty() && (p[0] == s[0] || p[0] == '.'));

//         // OPERATION: Handle the '*' (The Fork in the Road).
//         if (p.length() >= 2 && p[1] == '*') {
//             // Choice 1: skip "x*" (match 0) OR Choice 2: match 1 and stay in pattern.
//             // Time: O(2^(n+m)) in worst case | Space: O(n+m) recursion stack
//             return isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p));
//         } else {
//             // Choice 3: Simple match, move both forward.
//             // Time: O(1) + next recursion
//             return first_match && isMatch(s.substr(1), p.substr(1));
//         }
//     }
// };