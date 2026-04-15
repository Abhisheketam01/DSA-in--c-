
// gotta learn from these mistakes -  store karna element ko and 
class Solution{
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }
        int charCounts[26] = {0};
        for(int i = 0; i < s.length(); i++){
            charCounts[s[i] - 'a']++;
            charCounts[t[i] - 'a']--;
        }
        for(int count : charCounts){
            if(count != 0) return false;
        }
        return true;
    }
};