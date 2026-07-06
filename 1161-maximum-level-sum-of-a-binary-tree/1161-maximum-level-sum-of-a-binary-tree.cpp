class Solution{
public:
    int maxLevelSum(TreeNode* root){
        int maxsum = INT_MIN;
        int resultlevel = 0;
        int currlevel = 1;

        // create a queueu
        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty()){
            // not the whole size but sirf uss level ka size
            int n = que.size();
            int sum = 0;
            while(n--){
                TreeNode* node = que.front();
                que.pop();
                sum = sum + node->val;

                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
            if(sum > maxsum){
                maxsum = sum;
                resultlevel = currlevel;
            }
            currlevel++;
        }
        return resultlevel;
    }
};