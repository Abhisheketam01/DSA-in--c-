// 3 approaches.
// Recalled in mind wins - always.
class Solution {
public:
    string removeStars(string s){
        // create a stack
        stack<char> st;
        for(char &ch : s){
            if(ch == '*'){
                st.pop();
            }else {
                st.push(ch);
            }
        }
        string result = "";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};