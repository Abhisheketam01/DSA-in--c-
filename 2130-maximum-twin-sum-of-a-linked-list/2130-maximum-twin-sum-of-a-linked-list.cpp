class Solution{
public:
    int pairSum(ListNode* head){
        vector<int> vec;
        ListNode* curr = head;
        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        int start = 0, end = vec.size()-1;
        int LargestSumOfPair = 0;
        while(start < end){
            int Sum = vec[start] + vec[end];
            LargestSumOfPair = max(LargestSumOfPair, Sum);
            start++;
            end--;
        }
        return LargestSumOfPair;
    }
};