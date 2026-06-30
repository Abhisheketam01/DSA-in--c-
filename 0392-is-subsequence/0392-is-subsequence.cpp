class Solution{
public:
    bool isSubsequence(string s, string t){
        // 3rd variable lets call it current 
        int current = 0;
        for(int i = 0; i < t.length(); i++){
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