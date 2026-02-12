



/*
// step 0
// the answer is divided into - get , ahd , atl , addi, deli
// Node structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
*/
// step 1
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

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */













/*
// Node Structure
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
}
*/


// class MyLinkedList{
// public :
//     ListNode* head;
//     // constructor
//     MyLinkedList() {
//         head = NULL;
//     }

//     // Get value at index
//     // “I walk from the first node, one step at a time, 
//     //counting steps.
//     // If I reach the desired position, I return the value.
//     // If the list ends before that, I return -1.”
//     int get(int index){
//         ListNode* temp = head;
//         int i = 0;
//         while(temp != NULL && i < index){
//             temp = temp->next;
//             i++;
//         }
//         /* the temp is on that value*/
//         if(temp == NULL) return -1;
//         return temp->val;
//     }

//     // add at head
//     // “I make a new node.
//     // I attach it in front of the existing list.
//     // Then I update head to point to this newnode.”
//     void addAtHead(int val){
//         ListNode* newNode = new ListNode(val);
//         newNode->next = head;
//         head = newNode;
//     }

//     // at a tail
//         //“If the list is empty, the new node becomes the first one.
//     // Otherwise, I walk to the last node and attach the new node there.”
//     void addAtTail(int val){
//         ListNode* newNode = new ListNode(val);
//         if(head == NULL){
//             head = newNode;
//             return;
//         }
//         ListNode* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // At at index
//         // “I walk to the node just before the index.
//         // I place the new node between two existing nodes.    
//         // If the position doesn’t exist, I do nothing.”
//         // 1  2  4 then put 3 then 2 is pointing to 4 so 3 will   also    pointot  4 and now 2 will point 3 and 3 is pointing 4 so 
//         // order is 1 2 3 4 
//     void addAtIndex(int index, int val){
//         if(index == 0){
//             addAtHead(val);
//             return;
//         }
//         ListNode* temp = head;
//         int i =0;
//         while( temp != NULL && i < index - 1){
//             temp = temp->next;
//             i++;
//         }
//         if(temp == NULL) return;
//         ListNode* newNode = new ListNode(val);
//         newNode-> next = temp->next;
//         temp->next = newNode;

//     }
//     // delete at index
//     //  “I stand just before the node to remove.
//     // I connect around it so the list stays intact.
//     // Then I delete the unwanted node.”
//     // 1 2 3 4 remove 3
//     void deleteAtIndex(int index){
//         if (head == NULL) return;
//         if (index == 0){
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }
//         ListNode* temp = head;
//         int i = 0;
//         while(temp->next != NULL && i < index-1 ){
//             temp = temp->next;
//             i++;
//         }
//         if(temp->next == NULL) return;
//         ListNode* nodeToDelete = temp->next;
//         temp->next = nodeToDelete->next;
//         delete nodeToDelete;
//     }

// };


 




