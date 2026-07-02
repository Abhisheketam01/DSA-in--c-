class Solution{
public:
    bool isSubsequence(string s, string t){
        int current =0;
        for(int i = 0; i < t.length(); i++){
            if(current  < s.length() && s[current] == t[i]){
                current++;
            }
        }
        return current == s.length();
    }
};

/*
Input: s = "abc", t = "ahbgdc"
Output: true
*/