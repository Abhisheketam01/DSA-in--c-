class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0, right = n - 1 , count = 0;
        while( left < right ){
            int sum = nums[left] + nums[right];
            if(sum == k){
                left++, right-- , count++;
            } else if(sum < k){
                left++;
            } else{
                right--;
            }
        }
        return count;
    }
};