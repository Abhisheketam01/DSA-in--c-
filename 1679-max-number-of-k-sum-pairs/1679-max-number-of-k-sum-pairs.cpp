class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int PairCount = 0;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int comp = k  - nums[i];
            if(map[comp] > 0){
                PairCount++;
                map[comp]--;
            } else {
                map[nums[i]]++;
            }
        }
        return PairCount;
    }
};