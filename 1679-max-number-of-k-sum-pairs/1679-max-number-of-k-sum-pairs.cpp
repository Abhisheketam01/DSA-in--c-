class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int PairCount = 0;
        unordered_map<int , int> freqmap;
        for(int i = 0; i < nums.size(); i++){
            int comp = k - nums[i];
            if(freqmap[comp] > 0){
                PairCount++;
                freqmap[comp]--;
            } else {
                freqmap[nums[i]]++;
            }
        }
        return PairCount;
    }
};


/*
Input: nums = [1,2,3,4], k = 5
Output: 2
*/
