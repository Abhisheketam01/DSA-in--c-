class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        // My true Power is Foucs , no one can closer to it.
        // i have to invest more in the power of focus
        // agar nahi samajh raha ki samay kaha gaya - its a read flag,
        // no need to be happy no need to be sad - just get more focused than
        // the whole class and more focused that surroundings - give vibes of
        // liberation bass. always keep that goal in mind and ask is this
        // algigning with my goal

        int n = nums.size();
        int count = 0;

        // Start index of the subarray
        for (int i = 0; i < n; i++) {
            std::unordered_set<int> elements;
            long long currentSum = 0;

            // End index of the subarray
            for (int j = i; j < n; j++) {
                currentSum += nums[j];
                elements.insert(nums[j]);

                // Check if the current sum is one of the elements in this specific subarray
                if (elements.find((int)currentSum) != elements.end()) {
                    count++;
                }
            }
        }
        return count;
    }
};