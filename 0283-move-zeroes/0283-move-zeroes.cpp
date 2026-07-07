class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[current] = nums[i];
                current++;
            }
        }
        while(current < nums.size()){
            nums[current] = 0;
            current++;
        }
    }
};



/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
