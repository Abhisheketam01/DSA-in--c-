class Solution {
public:
    /*
    1. Create a function called isChar and then
    2. use while loop start and end pointer
    3. and then just like palindrom we will see
    4. we will then do swap
    5. think more deeply ,
    ham jo function create karne wale hai is it void or char?
    intution is saying its gonna be void, damn learned
    not a void neither the char - its bool wow!!! the question is wht its that?
    lets see
    6. what shold be the name of function - not a char but isVowel - to the
    point 7.


    */
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        // create a pointers - int left = 0; int right = s.size()-1;
        int left = 0; int right =s.size()-1;
        while(left  < right){
            while(left < right && !isVowel(s[left])) left++;
            while(left < right && !isVowel(s[right])) right--;

            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};