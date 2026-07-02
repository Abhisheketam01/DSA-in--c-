class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, r = n - 1, cnt = 0;
        while( l < r ){
            sum = nums[l] + nums[r];
            if(sum == k){
                l++;
                r--;
                cnt++;
            } else if( sum < k){
                l++;
            } else {
                r--;
            }
        }
        return cnt;
    }
};

// class Solution{
// public:
//     int maxOperations(vector<int>& nums, int k){
//         unordered_map<int , int> freqmap;
//         int PairCount = 0;
//         for(int i = 0; i < nums.size(); i++){
//             int comp = k - nums[i];
//             if(freqmap[comp] > 0){
//                 PairCount++;
//                 freqmap[comp]--;
//             } else {
//                 freqmap[nums[i]]++;
//             }
//         }
//         return PairCount;
//     }
// };
/*
Input: nums = [1,2,3,4], k = 5
Output: 2
*/
