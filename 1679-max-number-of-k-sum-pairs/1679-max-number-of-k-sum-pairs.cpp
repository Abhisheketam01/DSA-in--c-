class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int paircount = 0;
        int complement = 0;
        unordered_map<int , int> freqmap;
        for(int i = 0; i < nums.size(); i++){
            complement = k - nums[i];
            if(freqmap[complement] > 0){
                paircount++;
                freqmap[complement]--;
            } else {
                freqmap[nums[i]]++;
            }
        }
        return paircount;
    }
};



/*
Input: nums = [1,2,3,4], k = 5
Output: 2
*/
