// class Solution{
// public:
//     int lengthOfLongestSubstring(string s){
//         // step 1
//         unordered_set<char> charSet;
//         // we wanna measure the right - left = length and compare and find the maxlegth 
//         int maxLength = 0, left = 0;
//         // step 3 - run a right loop 
//         for(int right = 0; right < s.size(); right++){
//             // here we run a while loop to eleiminate a duplicate that right and left ele
//             while(charSet.count(s[right])){
//                 charSet.erase(s[left]);
//                 left++;
//             }
//             // this is how we insert a using insert method 
//             charSet.insert(s[right]);
//             maxLength = max(maxLength , right - left + 1);
//         }
//         return maxLength;
//     }
// };


// class Solution{
// public :
//     int lengthOfLongestSubstring(string s){
//         unordered_set<char> CharSet;
//         int maxlength = 0;
//         int left = 0;
//         for(int right = 0 ; right < s.size(); right++){
//             while(CharSet.count(s[right])){
//                 CharSet.erase(s[left]);
//                 left++;
//             }
//             CharSet.insert(s[right]);
//             maxlength = max(maxlength, right - left + 1);
//         }
//         return maxlength;
//     }
// };
// /







class Solution{
public:
    int lengthOfLongestSubstring( string s){
        unordered_set<char> charSet;
        int maxLength = 0;
        int left = 0;
        for(int right = 0; right < s.size(); right++){
            while( charSet.count(s[right])){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }
         return maxLength;
    }
};