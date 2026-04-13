/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 // I undersood the problem but i still cant code the solution by myself why ?
 // where i have to improve my coding ?

class Solution {
public:
    int goodNodes(TreeNode* root) {
        // 1st base case - we start the maxSoFar with the root's value
        return dfs(root, root->val);
    }
private:
    int dfs(TreeNode* node, int maxSoFar){
        // base case
        if(node ==  nullptr) return 0;
        
        int count = 0;

        if(node->val >= maxSoFar){
            count = 1;
        }
        // update the path maximum
        int netMax = max(maxSoFar, node->val);

        return count + dfs(node->left, netMax) + dfs(node->right, netMax);
    }
};
/*

1. m thinking was incorrect - node.val > root.val then count++ ; is a bit of wrong i guess
because what is between root and node there comes a node with value that is greatest than root and further node so we kinda fuked up.
2. node.val = root.val -- count+ return total count is also wrong i guess
3. because we should think this way Node.val >= max(path from root to node), 
max ever seen so far.
4. Node.val is the maximum it is good 
5. few terms to keep in mind backtracking , memory path localization etc...
6.  


*/