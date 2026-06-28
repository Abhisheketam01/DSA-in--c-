class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int filled = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[filled] = nums[i];
                filled++;
            }
        }
        while(filled < nums.size()){
            nums[filled] = 0;
            filled++;
        }
    }
};