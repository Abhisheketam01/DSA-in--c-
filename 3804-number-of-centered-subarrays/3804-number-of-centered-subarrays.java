class Solution {
    public int centeredSubarrays(int[] nums) {
        int n = nums.length;
        int count = 0;

        // Step 1: Iterate through every possible starting index
        for (int i = 0; i < n; i++) {
            // A new set and running sum for each starting position 'i'
            Set<Integer> elements = new HashSet<>();
            long currentSum = 0;

            // Step 2: Expand the subarray from index i to j
            for (int j = i; j < n; j++) {
                currentSum += nums[j];
                elements.add(nums[j]);

                // Step 3: Check if the sum of elements [i...j] exists in the set
                if (elements.contains((int) currentSum)) {
                    count++;
                }
            }
        }
        return count;

    }
}