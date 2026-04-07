/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution{
    public boolean leafSimilar(TreeNode root1, TreeNode root2){
        // step 1 create 2 arrays
        List<Integer> leaves1 = new ArrayList<>();
        List<Integer> leaves2 = new ArrayList<>();

        // step2 - pass values as a parameter
        generateLeafSequence(root1, leaves1);
        generateLeafSequence(root2, leaves2);

        // return true if comfiton satisfies else false
        return leaves1.equals(leaves2);
    }

    private void generateLeafSequence(TreeNode node , List<Integer> leaves){
        if(node == null){
            return;
        }
        if(node.left == null && node.right == null){
            leaves.add(node.val);
        }
        generateLeafSequence(node.left, leaves);
        generateLeafSequence(node.right, leaves);
    }
}