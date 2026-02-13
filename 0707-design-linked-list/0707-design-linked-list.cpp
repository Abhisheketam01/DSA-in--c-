class MyLinkedList {
public:
    ListNode* head;  // head of the linked list

    // Constructor
    MyLinkedList() {
        head = NULL;
    }
    
    // step 2
    // Get value at index
    int get(int index) {
        ListNode* temp = head;
        int i = 0;
        while (temp != NULL && i < index) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) return -1;
        return temp->val;
    }
    
    // step 3
    // Add at head
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }
    // step 4
    // Add at tail
    void addAtTail(int val) {
        // 4.1
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        //4.2
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    // step 5
    // Add at index
    void addAtIndex(int index, int val) {
        // 5.1
        if (index == 0) {
            addAtHead(val);
            return;
        }
        // 5.2
        ListNode* temp = head;
        int i = 0;
        while (temp != NULL && i < index - 1) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) return; // index > length
        ListNode* newNode = new ListNode(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    

    // step 6
    // Delete at index
    void deleteAtIndex(int index) {
        // 6.1 edge case if head has to delete
        if (head == NULL) return;
        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        //6.2
        ListNode* temp = head;
        int i = 0;
        while (temp->next != NULL && i < index - 1) {
            temp = temp->next;
            i++;
        }
        if (temp->next == NULL) return;
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        // here rule is L TO R and not typical array  R TO l.
        // x y z
    }
};