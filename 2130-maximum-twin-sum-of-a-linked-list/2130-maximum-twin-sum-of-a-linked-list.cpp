class Solution{
public:
    int pairSum(ListNode* head){
        /*
         how the fuck people be solving this problem using stack - crazy
         the index of the twin is main focus here - STACK is good option though.
         Its good approach though - 
        1. we store all the elements in stack
        2. we take a curr adn run or iterate it upto N / 2;
        3. in stakc we have a special power that is to access last element
        4. boom we take 1st and pop = twin sum 
        5. do curr++ and then we do pop() remove last el
        6. save it into max element 
        7. using max function we do will find the max.
         */
         /*
         Pseudocode - 
         1. store all the element in stack
         2. calcualte sum
         3. find max sum.
         */
         stack<int> st;
         ListNode* curr = head;
         while(curr != NULL){
            st.push(curr->val);
            curr = curr->next;
        }
        int N = st.size();
        curr = head;
        int count = 1;
        int result = 0;
        while(count <= N/2){
            // how do we add sum = first and last bro like what the fuck?
            // how do we add first and last sum of stack ?
            // curr stack element + last pop el
            result = max(result, curr->val+st.top());
            curr = curr->next;
            st.pop();
            count++;
        }
        return result;
    }
};