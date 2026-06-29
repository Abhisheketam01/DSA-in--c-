class Solution{
public:
    bool isSubsequence(string s, string t){
        // here we take 3rd variable to handle this shot
        int write = 0;
        for(int i = 0; i < t.length(); i++){
            if(s[write] == t[i]){
                write++;
            }
        }
        return write == s.size();
    }
};