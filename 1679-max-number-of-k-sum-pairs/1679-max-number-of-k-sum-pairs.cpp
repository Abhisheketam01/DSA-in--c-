class Solution{
public:
    int maxOperations(vector<int>& nums , int k ){
        // size
        int n = nums.size();
        // sort
        sort(nums.begin(), nums.end());
        // testers
        int l = 0 , r = n - 1, cnt = 0;
        // running the loop
        while( l < r){
            int sum = nums[l] + nums[r];
            if( sum == k ){
                l++, r--;
                cnt++;
            }
            else if(sum < k ){
                l++;
            } else {
                r--;
            }
        }
        return cnt;
    }
};