class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            // Expand the window
            if (nums[right] == 0) {
                zeroCount++;
            }

            // Repair the window if it becomes invalid
            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Update the answer (must delete one element)
            ans = max(ans, right - left);
        }

        return ans;
    }
};
