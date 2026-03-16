class Solution {
public:
    int value(char r) {
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;
        return 0;
    }

    // yes the loop is wrong bro -
    int romanToInt(string s) {
        int total = 0;
        int N = s.length();

        int current_val = 0, Next_val = 0;
        for (int i = 0; i < N; i++) {
            int current_val = value(s[i]);
            Next_val = value(s[i + 1]);
            if ((i + 1) < N) {
                int next_val = value(s[i + 1]);
                if (current_val < next_val) {
                    total = total + (next_val - current_val);
                    i++;
                } else {
                    total = total + current_val;
                }
            } else {
                total = total + current_val;
            }
        }
        return total;
    }
};