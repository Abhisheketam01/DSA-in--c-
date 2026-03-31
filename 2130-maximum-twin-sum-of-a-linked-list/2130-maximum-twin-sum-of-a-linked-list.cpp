class Solution{
public:
    int pairSum(ListNode* head){
        // step 1 - create a vector
        vector<int> vec;
        // step 2
        // create a temporary node called curr = head;
        ListNode* curr = head;
        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        // now once we stored the values in array 
        // now we hacve to find the greatest sum of pair
        // create 2 variables - called start and end
        int start = 0, end = vec.size()-1;
        int LargestSumOfPair = 0;
        // run a while loop 
        while(start < end){
            int Sum = vec[start] + vec[end];
            LargestSumOfPair = max(LargestSumOfPair, Sum);
            start++;
            end--;
        }
        return LargestSumOfPair;
    }
};