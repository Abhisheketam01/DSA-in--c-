class Solution{
public:
    ListNode* deleteMiddle(ListNode* head){
        // base case?
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        // creating 3 nodes prev , slow and fast;
        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while( fast!= nullptr && fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        return head;
    }
};
/*
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
*/