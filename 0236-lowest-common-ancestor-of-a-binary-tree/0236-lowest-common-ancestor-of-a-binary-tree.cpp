class Solution{
public: 
    // function here 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        // step 1
        if(root == NULL){
            return NULL;
        }
        // step 2
        if(root == p || root == q){
            return root;
        }
        // step3
        TreeNode* leftN = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightN = lowestCommonAncestor(root->right, p, q);
        // step4
        if(leftN != NULL && rightN != NULL){
            return root;
        }
        // step5
        if(leftN != NULL){
            return leftN;
        } else {
            return rightN;
        }
    }
};