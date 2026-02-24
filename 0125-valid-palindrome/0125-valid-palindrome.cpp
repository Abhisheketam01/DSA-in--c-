class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        int start = 0, end = len-1;
        while( start < end){
            if(!isalnum(s[start])){
                start++;
            }
            else if(!isalnum(s[end])){
                end--;
            }
            else if(tolower(s[start]) != tolower(s[end])){
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};