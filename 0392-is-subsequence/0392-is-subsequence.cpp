class Solution{
public:
    bool isSubsequence(string s, string t){
        int current = 0;
        for(int i = 0; i < t.size(); i++){
            if(current < s.size() && s[current] == t[i]){
                current++;
            }
        }
        return current == s.size();
    }
};

/*
Input: s = "abc", t = "ahbgdc"
Output: true
*/