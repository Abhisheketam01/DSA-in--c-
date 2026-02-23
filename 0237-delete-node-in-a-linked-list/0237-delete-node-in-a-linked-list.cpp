/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         // Overwrite data of next node on current node.
//         node->val = node->next->val;
//         // Make current node point to next of next node.
//         node->next = node->next->next;
//         // 1  2  3  4  5
//         // node = 3 okay ?
//         // want to delete that node 3 
//         // node 3 will become node 4 
//         // 1  2  4  4  5
//         // now the first 4 will direct point to 5 and surpass 2nd 4
//         // 1  2  4  5
//     }
// };

class Solution{
public:
    void deleteNode(ListNode* node){    
        node->val = node->next->val;
        node->next = node->next->next;
    }
};