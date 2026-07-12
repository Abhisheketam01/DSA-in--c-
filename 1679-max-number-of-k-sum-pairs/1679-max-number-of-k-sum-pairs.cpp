// freqmap approach 
class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        unordered_map<int , int> freqmap;
        int complement = 0;
        int paircount = 0;
        for(int i = 0; i < nums.size(); i++){
            complement = k - nums[i];
            if(freqmap[complement] > 0){
                paircount++;
                freqmap[complement]--;
            }else{
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
