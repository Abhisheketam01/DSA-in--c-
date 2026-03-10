class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the shorter array to keep binary search fast
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int i = (low + high) / 2; // Cut for nums1
            int j = (m + n + 1) / 2 - i; // Corresponding cut for nums2
            // Handle edge cases where the cut is at the very beginning or end
            int L1 = (i == 0) ? INT_MIN : nums1[i - 1];
            int R1 = (i == m) ? INT_MAX : nums1[i];
            int L2 = (j == 0) ? INT_MIN : nums2[j - 1];
            int R2 = (j == n) ? INT_MAX : nums2[j];
            if (L1 <= R2 && L2 <= R1) {
                // We found the perfect partition!
                if ((m + n) % 2 == 0) {
                    return (max(L1, L2) + min(R1, R2)) / 2.0;
                } else {
                    return max(L1, L2);
                }
            } else if (L1 > R2) {
                // i is too far right, move it left
                high = i - 1;
            } else {
                // i is too far left, move it right
                low = i + 1;
            }
        }
        return 0.0;
    }
};