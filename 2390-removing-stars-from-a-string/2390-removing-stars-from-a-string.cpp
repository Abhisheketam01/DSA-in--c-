// 3 approaches.
// Recalled in mind wins - always.
class Solution {
public:
    string removeStars(string s){
        // string approach
        // what was the string approach of this problem tht i leanred yesterday?
        // 3rd two pointer approach
        vector<char> ch(s.size());
        int j = 0;
        for(int i =0; i < s.length(); i++){
            if(s[i] == '*'){
                j--;
            } else {
                ch[j] = s[i];
                j++;
            }
        }
        string result = "";
        for(int i = 0; i < j; i++){
            result.push_back(ch[i]);
        }
        return result;
    }
};