// freqmap approach 
class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int i = 0;
        int ArrSize = nums.size();
        int j = ArrSize - 1;
        int sum = 0;
        int paircount = 0;
        sort(nums.begin(), nums.end());
        while( i < j ){
            sum = nums[i] + nums[j];
            if(sum == k){
                paircount++;
                i++;
                j--;
            } else if(sum < k){
                i++;
            } else {
                j--;
            }
        }
        return paircount;
    }
};



/*
Input: nums = [1,2,3,4], k = 5
Output: 2
*/
