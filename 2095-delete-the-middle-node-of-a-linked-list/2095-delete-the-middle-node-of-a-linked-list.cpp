



/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // handling edge case
        if (head == nullptr || head->next == nullptr) {
            return nullptr; 
        }
        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        // Move fast by 2 and slow by 1
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;          // Save current slow as the 'previous' node
            slow = slow->next;    // Move slow 1 step
            fast = fast->next->next; // Move fast 2 steps
        }

        prev->next = slow->next;
        return head;
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  * int val;
//  * ListNode *next;
//  * ListNode() : val(0), next(nullptr) {}
//  * ListNode(int x) : val(x), next(nullptr) {}
//  * ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         // EDGE CASE: If the list has only 1 node (n=1)
//         // The middle is index 0. Deleting it leaves an empty list.
//         if (head == nullptr || head->next == nullptr) {
//             return nullptr; 
//         }

//         // We need a 'prev' pointer to stay one step behind 'slow'.
//         // This is because to delete 'slow', we need to link 'prev' to 'slow->next'.
//         ListNode* prev = nullptr;
//         ListNode* slow = head;
//         ListNode* fast = head;

//         // Move fast by 2 and slow by 1
//         while (fast != nullptr && fast->next != nullptr) {
//             prev = slow;          // Save current slow as the 'previous' node
//             slow = slow->next;    // Move slow 1 step
//             fast = fast->next->next; // Move fast 2 steps
//         }

//         // When loop ends, 'slow' is at the middle node.
//         // We delete it by skipping it: connect prev to the node after slow.
//         prev->next = slow->next;

//         // Optional: Free the memory of the deleted node
//         // delete slow; 

//         return head;
//     }
// };