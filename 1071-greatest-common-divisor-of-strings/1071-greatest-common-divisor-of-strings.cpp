// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         if (str1 + str2 != str2 + str1) {
//             return "";
//         }
//         int len1 = str1.length();
//         int len2 = str2.length();
//         int g = gcd(len1, len2);
//         return str2.substr(0, g); // this is something i should remember at all.
//     }
// // private:
// //     int gcd(int a, int b) {
// //         while (b != 0) {
// //             int temp = b;
// //             b = a % b;
// //             a = temp;
// //         }
// //         return a;
// //     }
// };












class Solution{
public :
    string gcdOfStrings(string str1 , string str2){
        // z+ security check
        if(str1 + str2 != str2 + str1){
            return "";
        }

        int len1 = str1.length();
        int len2 = str2.length();
        int g = gcd(len1, len2);
        return str1.substr(0, g);
    }

private :
    int gcd(int a , int b){
        while(b > 0){
            int temp = b;
            b =  a % b;
            a = temp;
        }
        return a;
    }
};

