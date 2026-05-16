class Solution{
public:
    int minimumPairRemoval(vector<int>& nums){
        int cnt = 0;
        // step 1 - reverse eng - check if the array is sorted or not 
        while(!is_sorted(nums.begin(), nums.end())){
            // step 2 - set up toold
            int minIndex = 0;
            int minSum = nums[0] + nums[1];
            // step 3
            for(int i = 1; i < nums.size() - 1; i++){
                int currSum = nums[i] + nums[i+1];
                if(currSum < minSum){
                    minSum = currSum;
                    minIndex = i;
                }
            }
            nums[minIndex] = nums[minIndex] + nums[minIndex+1];
            // erase
            nums.erase(nums.begin()+minIndex+1);
            cnt++;
        }
        return cnt;
    }
};