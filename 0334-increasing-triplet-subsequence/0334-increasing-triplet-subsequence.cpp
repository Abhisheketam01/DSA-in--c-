class Solution {
public:
    bool increasingTriplet(vector<int>& nums){
        int num1 = INT_MAX;
        int num2 = INT_MAX;

        for(int num3 : nums){
            if(num3 <= num1){
                num1 = num3;
            } else if( num3 <= num2){
                num2 = num3;
            } else {
                return true;
            }
        }
        return false;
    }
};