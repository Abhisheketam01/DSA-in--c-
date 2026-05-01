class Solution {
public:
    string reverseWords(string s){
        int n = s.length();
        int i = n - 1;

        string ans = "";
        while( i >= 0){
            while( i>= 0 && s[i] == ' ') i--;
            if( i < 0 ) break;
            int j = i;
            while( i >= 0 && s[i] != ' ') i--;
            if(!ans.empty()) ans += ' ';
            ans += s.substr(i+1, j-i);
        }
        return ans;
    }
};

// No human , no woman , no man  = no suffering , end bhenchod.