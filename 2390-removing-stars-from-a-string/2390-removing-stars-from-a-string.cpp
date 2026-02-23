class Solution{
public:
    string removeStars(string s){
        string result = "";
        for(char &ch : s ){
            if(ch == '*'){
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};





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