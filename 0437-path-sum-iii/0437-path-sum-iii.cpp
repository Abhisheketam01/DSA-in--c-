#include <unordered_map>
using namespace std;

class Solution{
public:
    int pathSum(TreeNode* root, int targetSum){
        unordered_map<long long, int> prefixSumMap;

        prefixSumMap[0] = 1;

        return solve(root , 0 , targetSum, prefixSumMap);
    }

private:
    int solve(TreeNode* root, long long runningSum, int target , unordered_map<long long, int>& map){
        if(!root){
            return 0;
        }
        runningSum += root->val;
        // check if the runningSum - target exist in out map or not 
        int count = 0;
        if(map.find(runningSum - target) != map.end()){
            count = map[runningSum - target];
        }
        // Add current running Sum to the map for out children to use
        map[runningSum]++;

        // recurse left and right , accumulate the total count
        count += solve(root->left, runningSum, target, map);
        count += solve(root->right, runningSum, target, map);

        map[runningSum]--;
        return count;

    }
};