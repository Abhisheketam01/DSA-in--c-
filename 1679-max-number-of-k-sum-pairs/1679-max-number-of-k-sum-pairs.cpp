// freqmap approach 
class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int paircount = 0;
        int comp;
        unordered_map<int, int> freqmap;
        for(int i = 0; i < nums.size(); i++){
            comp = k - nums[i];
            if(freqmap[comp] > 0){
                paircount++;
                freqmap[comp]--;
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
