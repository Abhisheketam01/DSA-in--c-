class Solution {
public:
    int hammingWeight(int n) {
        int x;
        while( n > 0){
            int k = n % 2;
            x = x + k;
            n = n / 2;
        }
        return x;
    }
};