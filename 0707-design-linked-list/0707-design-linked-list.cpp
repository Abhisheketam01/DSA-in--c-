class MyLinkedList{
public :
    ListNode* head;
    MyLinkedList(){
        head = NULL;
    }

    int get(int index){
        ListNode* temp = head;
        int i = 0;
        while( temp != NULL && i < index){
            temp = temp->next;
            i++;
        }
        if(temp == NULL) return -1;
        return temp->val;
    }

    void addAtHead(int val){
        // how to put a node at head
        // create a newNode
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val){
        // i have to add a node at tail
        // create a new node
        ListNode* newNode = new ListNode(val);
        ListNode* temp = head;
        int i = 0;
        if(head == NULL){
            head = newNode;
            return;
        }
        while( temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void addAtIndex(int index, int val){
        if(index == 0){
            addAtHead(val);
            return;
        }
        ListNode* temp = head;
        int i = 0;
        while( temp != NULL && i < index - 1){
            temp = temp->next;
            i++;
        }
        if(temp == NULL) return;
        ListNode* newNode = new ListNode(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index){
        if(head== NULL) return;
        if(index == 0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode* temp = head;
        int i = 0; 
        while(temp->next != NULL && i < index -1){
            temp = temp->next;
            i++;
        }
        if(temp->next == NULL) return;
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

};