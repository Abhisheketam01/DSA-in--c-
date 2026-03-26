/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
        
//     }
// };
class Solution{
public:
    ListNode* reverseList(ListNode* head){
        // a base case - understood perfectly
        if(head == NULL || head->next == NULL){
            return head;
        }
        // creating a recursive function
        ListNode* last = reverseList(head->next);
        // these 2 steps to rervse any Linked List baddiee
        head->next->next = head;
        head->next = NULL;
        // return the last;
        return last;
    }
};
