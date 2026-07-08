class Solution{
public:
    vector<int> rightSideView(TreeNode* root){
        if(!root){
            return {};
        }

        queue<TreeNode*> que;
        vector<int> result;

        que.push(root);

        while(!que.empty()){
            int n = que.size();
            TreeNode* Node = NULL;
            while(n--){
                // this node will be our last node when the while loop finishes
                Node = que.front();
                que.pop();

                if(Node->left){
                    que.push(Node->left);
                }
                if(Node->right){
                    que.push(Node->right);
                }
            }
            result.push_back(Node->val);
        }
        return result;
    }
};