class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int nonzero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[nonzero] = nums[i];
                nonzero++;
            }
        }
        while(nonzero < nums.size()){
            nums[nonzero] = 0;
            nonzero++;
        }
    }
};



/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
