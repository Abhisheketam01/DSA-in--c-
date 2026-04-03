class Solution {
public:
    string longestPalindrome(string s) {
        // Preprocess: "aba" -> "^#a#b#a#$"
        string t = "^";
        for (char c : s) t += "#" + string(1, c);
        t += "#$";

        int n = t.length();
        vector<int> p(n, 0);
        int center = 0, right = 0;
        int maxLen = 0, centerIndex = 0;

        for (int i = 1; i < n - 1; i++) {
            // Use symmetry to skip work
            if (i < right) {
                p[i] = min(right - i, p[2 * center - i]);
            }

            // Expand around center i
            while (t[i + 1 + p[i]] == t[i - 1 - p[i]]) {
                p[i]++;
            }

            // Update boundary
            if (i + p[i] > right) {
                center = i;
                right = i + p[i];
            }

            // Track longest
            if (p[i] > maxLen) {
                maxLen = p[i];
                centerIndex = i;
            }
        }

        // Extract original string: start is (centerIndex - maxLen) / 2
        return s.substr((centerIndex - maxLen) / 2, maxLen);
    }
};
