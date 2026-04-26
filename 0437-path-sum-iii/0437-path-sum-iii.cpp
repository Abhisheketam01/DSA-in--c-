#include <unordered_map>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        // Tally sheet to store frequency of prefix sums
        unordered_map<long long, int> prefixSumMap;
        
        // Base case: a sum of 0 is always seen once (for paths starting from root)
        prefixSumMap[0] = 1;
        
        return solve(root, 0, targetSum, prefixSumMap);
    }

private:
    int solve(TreeNode* root, long long runningSum, int target, unordered_map<long long, int>& map) {
        if (!root) {
            return 0;
        }

        // Add current node's value to the path sum
        runningSum += root->val;

        // Check if (runningSum - target) exists in our history
        // This is the "Mathematical Invariant" that finds the sub-path
        int count = 0;
        if (map.find(runningSum - target) != map.end()) {
            count = map[runningSum - target];
        }

        // Add current runningSum to the map for our children to use
        map[runningSum]++;

        // Recurse Left and Right, accumulating the total count
        count += solve(root->left, runningSum, target, map);
        count += solve(root->right, runningSum, target, map);

        // BACKTRACK: Remove the current sum from the map before returning to the parent
        // This prevents paths in the right branch from using prefix sums of the left branch
        map[runningSum]--;

        return count;
    }
};