class Solution{
public:
    int maxPath = 0;

    void solve(TreeNode* root, int left, int right){
        if(!root) return;

        maxPath = max({maxPath, left, right});
        // maxPath compares all of them and return the maximum value among theree of them

        solve(root->left, right+1, 0);
        solve(root->right, 0, left +1); 
    }

    int longestZigZag(TreeNode* root){
        solve(root, 0, 0);
        return maxPath;
    }
};

/*

Here the logic is simple - 
came from L then right ki value + 1;
came from R then left ki value  + 1;

*/