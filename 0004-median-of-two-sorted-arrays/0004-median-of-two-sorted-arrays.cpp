class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums3(m + n);
        
        int i = 0, j = 0, k = 0;

        // 1. Compare and merge while both arrays have elements
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                nums3[k++] = nums1[i++];
            } else {
                nums3[k++] = nums2[j++];
            }
        }

        // 2. If nums1 has leftovers, dump them
        while (i < m) {
            nums3[k++] = nums1[i++];
        }

        // 3. If nums2 has leftovers, dump them
        while (j < n) {
            nums3[k++] = nums2[j++];
        }

        // 4. Median Logic (Same as before, but faster!)
        int x = nums3.size();
        if (x % 2 == 0) {
            return (nums3[x / 2] + nums3[(x / 2) - 1]) / 2.0;
        } else {
            return nums3[x / 2];
        }
    }
};