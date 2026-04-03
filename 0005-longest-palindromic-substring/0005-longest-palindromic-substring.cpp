
class Solution {
public :
    string longestPalindrome(string str){
        if(str.length() <= 1){
            return str;
        }
        string PLS = "";
        for(int i = 1; i < str.length();i++){
            int low = i;
            int high = i;
            while(low >= 0 && high < str.length() && str[low] == str[high]){
                low--;
                high++;
            }
            string palindrome = str.substr(low+1, high - low  - 1);
            if(palindrome.length() > PLS.length()){
                PLS = palindrome;
            }

            low = i-1;
            high = i;
            while(low >= 0 && high < str.length() && str[low] == str[high]){
                low--;
                high++;
            }
            palindrome = str.substr(low + 1, high - low - 1);
            if(palindrome.length() > PLS.length()){
                PLS = palindrome;
            }
        }
        return PLS;
    }
};
/*
class Solution {
public :
    string longestPalindrome(string str){
        if(str.length() <= 1){
            return str;
        }
        string PLS = "";
        for(int i = 1; i < str.length();i++){
            int low = i;
            int high = i;
            while(low >= 0 && high < str.length() && str[low] == str[high]){
                low--;
                high++;
            }
            string palindrome = str.substr(low+1, high - low  - 1);
            if(palindrome.length() > PLS.length()){
                PLS = palindrome;
            }

            low = i-1;
            high = i;
            while(low >= 0 && high < str.length() && str[low] == str[high]){
                low--;
                high++;
            }
            palindrome = str.substr(low + 1, high - low - 1);
            if(palindrome.length() > PLS.length()){
                PLS = palindrome;
            }
        }
        return PLS;
    }
};
*/