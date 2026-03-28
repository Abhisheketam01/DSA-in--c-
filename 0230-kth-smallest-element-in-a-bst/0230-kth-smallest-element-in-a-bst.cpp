class Solution{
public:
    // writing a fucking , return a int , passed the root of treenode and a int k 
    int kthSmallest(TreeNode* root, int k){
        // created a stack
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(node || !st.empty()){
            while(node){
                st.push(node);
                node = node->left;
            }
            node = st.top(); st.pop();
            if(--k == 0) return node->val;
            node = node->right; 
        }
        return -1;
    }
};

// class Solution {
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         stack<TreeNode*> st;
//         TreeNode* node = root;
//         while (node || !st.empty()) {
//             while (node) {
//                 st.push(node);
//                 node = node->left;
//             }
//             node = st.top(); st.pop();
//             if (--k == 0) return node->val;
//             node = node->right;
//         }
//         return -1; // should never happen
//     }
// };