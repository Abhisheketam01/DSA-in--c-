class Solution{
public:
    // why ? because we wanna group them so we did vector<vector<int>> function is levelOrder
    // here we passed the TreeNode* roor
    vector<vector<int>> levelOrder(TreeNode* root){
        // here we create a vector<vector<int>> ans; a vector that store the answer
        vector<vector<int>> ans;
        // a base condtion
        if(!root) return ans;

        // creating a queue why ????? lets see
        queue<TreeNode*> q;
        // here we passed the root here
        q.push(root);
        // jabtak ki q empty nahi hota tab tak yeh while loop run karega
        while(!q.empty()){
            // q ka size
            int sz = q.size();
            // creating a another vector called level
            vector<int> level;
            // run i loop here
            for(int i = 0; i < sz; i++){
                TreeNode* node = q.front(); q.pop();
                level.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
/*
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int sz = q.size();
            vector<int> level;

            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front(); q.pop();
                level.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};
*/