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

        // ordered matters - mistake correctex
        // step 1
        int SZ = nums.size();
        int counter = 0;
        // step 2 pick a starting element
        for (int i = 0; i < SZ; i++) {
            // stpe 3 - everytim we have to reset the unordered set and
            // everytime we have to reset the currentSum = 0;
            unordered_set<int> SET;
            long long currentSum = 0;
            // pick the ending point
            for (int j = i; j < SZ; j++) {
                // calculate the currentsum
                currentSum += nums[j];
                // store the sum in set
                SET.insert(nums[j]);
                // check if the count currentSum do exist inSET or not
                if (SET.count((int)currentSum)) {
                    counter++;
                }
            }
        }
        return counter;
    }
};