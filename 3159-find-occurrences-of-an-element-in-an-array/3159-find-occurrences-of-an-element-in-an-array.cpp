class Solution{
public:
// return type is vector answer
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x){
        // create a list , vector called indices
        vector<int> indices;
        // first for loop
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                indices.push_back(i);
            }
        }
        //
        int q = queries.size();
        vector<int> answer(q,-1);
        int k = 0;
        for(int i = 0; i < queries.size(); i++){
            k = queries[i];
            if(k <= indices.size()){
                answer[i] = indices[k-1];
                k++;
            }
        }
        return answer;
    }
};


