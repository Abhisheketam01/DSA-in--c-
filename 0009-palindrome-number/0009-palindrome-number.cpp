class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate = x;
        double rev = 0;
        int ld = 0;
        while( x > 0){
            ld = x % 10;
            rev = rev * 10 + ld;
            x = x / 10;
        }
        if(rev == duplicate){
            return true;
        } else {
            return false;
        }
    }
};

/*
class Solution {
public:
    bool isPalindrome(int x) {
        long long org = x;
        long long rev = 0;
        int ld = 0;
        while (x > 0) {
            ld = x % 10;
            rev = rev * 10 + ld;
            x = x / 10;
            // rev = rev * 10 + ld;
        }
        if (rev == org) {
            return true;
        } else {
            return false;
        }
    }
};
*/