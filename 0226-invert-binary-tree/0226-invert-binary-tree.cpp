/*

Can i write a solution from scratch ?
of this problem?
*/
// how to solve the problem ?
// take it oe leave it.
class Solution {
public:
    TreeNode* invertTree(TreeNode* root){
        // Base conditon
        if(!root) return nullptr;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};