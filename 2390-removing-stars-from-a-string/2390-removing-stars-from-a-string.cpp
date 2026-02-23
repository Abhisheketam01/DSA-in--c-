class Solution{
public: 
    string removeStars(string s){
        vector<char> ch(s.size());
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            if( s[i] == '*'){
                j--;
            } else {
                ch[j] = s[i];
                j++;
            }
        }
        string result = "";
        for(int i =0; i < j; i++){
            result.push_back(ch[i]);
        }
        return result;
    }
};




// class Solution{
// public:
//     string removeStars(string s){
//         string result = "";
//         for(char &ch : s ){
//             if(ch == '*'){
//                 result.pop_back();
//             } else {
//                 result.push_back(ch);
//             }
//         }
//         return result;
//     }
// };





// class Solution{
// public:
//     string removeStars(string s){
//         stack<char> st;
//         for(char &ch : s){
//             if(ch == '*'){
//                 st.pop();
//             } else {
//                 st.push(ch);
//             }
//         }
//         string result = "";
//         while(!st.empty()){
//             result.push_back(st.top());
//             st.pop();
//         }
//         reverse(begin(result), end(result));
//         return result;
//     }
// };