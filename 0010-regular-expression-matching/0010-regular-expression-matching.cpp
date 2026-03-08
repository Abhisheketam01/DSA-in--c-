class Solution {
public:
    bool isMatch(string s, string p) {
        // BASE CASE: If pattern is empty, string must be empty.
        if (p.empty()) return s.empty();

        // OPERATION: Check if first characters match.
        // Time: O(1) | Space: O(1)
        bool first_match = (!s.empty() && (p[0] == s[0] || p[0] == '.'));

        // OPERATION: Handle the '*' (The Fork in the Road).
        if (p.length() >= 2 && p[1] == '*') {
            // Choice 1: skip "x*" (match 0) OR Choice 2: match 1 and stay in pattern.
            // Time: O(2^(n+m)) in worst case | Space: O(n+m) recursion stack
            return isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p));
        } else {
            // Choice 3: Simple match, move both forward.
            // Time: O(1) + next recursion
            return first_match && isMatch(s.substr(1), p.substr(1));
        }
    }
};