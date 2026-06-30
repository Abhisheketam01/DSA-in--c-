class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int nonzeroes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[nonzeroes] = nums[i];
                nonzeroes++;
            }
        }
        while(nonzeroes < nums.size()){
            nums[nonzeroes] = 0;
            nonzeroes++;
        }
    }
};

/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
