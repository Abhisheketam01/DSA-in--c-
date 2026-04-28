class Solution{
public :
    int pathSum(TreeNode* root, int targetSum){
        // step 1 create a unordred map of sum and then along with it we store its frequency , iike for how many times the sum is appearing
        unordered_map<long long, int> prefixSumMap;
        // here we add a base case 
        prefixSumMap[0] = 1;
         
        return solve(root, 0, targetSum,  prefixSumMap);

    }

private:
    int solve(TreeNode* root, long long runningSum, int target, unordered_map<long long, int>& map){
        // this is the base case here we return 0 if we touch the rock bottom 
        if(!root){
            return 0;
        }
        // here we do rinningSum += root val which = what is runningSum , we passed it as long long
        runningSum += root->val;

        // now we gonna check if the runningSum - target exist in our history or not 
        // this is the mathametical variant , that finds the sub path
        // if we find it all good
        int count = 0;
        if(map.find(runningSum - target) != map.end()){
            count = map[runningSum - target];
        }
        // add current runningSum to the map for our children to use
        map[runningSum]++;
        // recurse left and right , accumulating the count
        count += solve(root->left, runningSum, target, map);
        count += solve(root->right, runningSum, target, map);

        map[runningSum]--;

        return count;
    }
};