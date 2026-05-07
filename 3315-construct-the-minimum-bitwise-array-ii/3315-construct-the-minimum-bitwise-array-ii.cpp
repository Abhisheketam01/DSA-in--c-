class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums){
        vector<int> result;

        for(int &num : nums){
            if(num == 2){
                result.push_back(-1);
                continue;
            }
            bool found = false;
            for(int j = 1; j < 32; j++){
                if((num & ( 1 << j)) > 0){
                    continue;
                }
                result.push_back((num ^ (1 << ( j -1))));
                found = true;
                break;
            }
            if(!found){
                result.push_back(-1);
            }
        }
        return result;
    }
};
// lets gain back the aura ,