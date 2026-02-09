class Solution{
public :
    bool uniqueOccurrences(vector<int>& arr){
        // create a map for count
        unordered_map<int,int> mp;
        for(int num : arr){
            mp[num]++;
        }
        // create a set of freq
        unordered_set<int> seen;
        for( auto &entry : mp){
            if(seen.find(entry.second) != seen.end()){
                return false;
            }
            seen.insert(entry.second);
        }
        return true;
    }
};