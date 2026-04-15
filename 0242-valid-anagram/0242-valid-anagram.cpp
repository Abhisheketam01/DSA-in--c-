
// gotta learn from these mistakes -  store karna element ko and 
class Solution{
public:
    bool isAnagram(string s, string t){
        // check the length() if its not equal , return false;
        if(s.length() != t.length()){
            return false;
        }
        // convert characters into numbers concept 
        // here we create int charCounts of size 26;
        int charCounts[26] = {0};
        // run a for loop
        for(int i = 0; i < s.length(); i++){
            // convert chars into numbers , jo s mai hai usko kardo +1 and jo t mai hai usko kardo -1 and this is how things get done , 
            charCounts[s[i] - 'a']++;
            charCounts[t[i] - 'a']--;
        }
        // agar unme se koi bhi integer is not equal to 0 then return false else true
        for(int count : charCounts){
            if(count != 0) return false;
        }
        return true;
    }
};