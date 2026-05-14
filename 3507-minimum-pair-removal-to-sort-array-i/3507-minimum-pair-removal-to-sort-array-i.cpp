class Solution{
public:
    int minimumPairRemoval(vector<int>& nums){
        int cnt = 0;
        while(!is_sorted(nums.begin(), nums.end())){
            int minIndex = 0;
            int minSum = nums[0] + nums[1];
            for(int i = 1; i < nums.size() - 1; i++){
                int currSum = nums[i] + nums[i + 1];
                if(currSum < minSum){
                    minSum = currSum;
                    minIndex = i;
                }
            }
            nums[minIndex] = nums[minIndex] + nums[minIndex+1];
            // ersase
            nums.erase(nums.begin() + minIndex + 1);
            cnt++;
        }
        return cnt;
    }
};
