class Solution{
public:
    void postOrder(TreeNode* root, int level, vector<int>& result){
        if(!root){
            return;
        }
        if(result.size() < level){
            result.push_back(root->val);
        }
        postOrder(root->right, level+1, result);
        postOrder(root->left, level+1, result);
    }
    vector<int> rightSideView(TreeNode* root){
        if(!root){
            return{};
        }
        vector<int> result;

        postOrder(root, 1 , result);

        return result;
    }
};