// class Solution {
// public:
//     int findFinalValue(vector<int>& nums, int original) {
        
//     }
// };

class Solution{
public:
    int findFinalValue(vector<int>& nums, int original){
        //unrodered_set()
        // creating a set callin git s 
        // then passing the whole array into it bro why ?
        unordered_set<int> s(nums.begin(), nums.end());
        while(s.count(original)){
            original *= 2;
        }
        return original;
    }
};

/*
This approach sucks bro 
i am being honest about it-
        // // here
        // // gotta use the linear search - 
        // //  multply original * 2 =  newOrg element is found then only proceeed
        // // for next iteratio
        // int newOrg = 2 * original;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] != newOrg){
        //         return newOrg;
        //     } else {
        //         newOrg = newOrg * 2;
        //     }
        // }
        // return newOrg;
*/