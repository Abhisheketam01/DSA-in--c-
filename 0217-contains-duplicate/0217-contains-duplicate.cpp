class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
    unordered_set<int> seen;
    for(int x : nums){
        if(seen.count(x)){
            return true;
        }
        seen.insert(x);
    }
    return false;
    }
};
/*
// what i though is ki pehle set create karo and then baher ek loop lagalo for ka if 
that number found in seen guess what boom return true;
else return false;

here they have directly - 
done for pehle for loop and then 

*/