/* here we are using the approach of binary search 
1. take array and int
2. sort them 
3. set the testers = l , r and cnt. , sum = 0;
4. if array[l] + array[r] == sum and if sum == k cnt++
5. if the sum < k so we increase l++ else r--;
*/

class Solution{
public:
    int maxOperations(vector<int>& nums, int k){
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l =0, r = n - 1, cnt = 0;
        while( l < r ){
            sum = nums[l] + nums[r];
            if(sum == k){
                cnt++;
                l++;
                r--;
            } else if( sum < k ){
                l++;
            } else{
                r--;
            }
        }
        return cnt;
    }
};