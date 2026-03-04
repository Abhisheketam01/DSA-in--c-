// Study This Approach , better.

class RecentCounter {
    int records[10001];
    int start = 0;
    int end = 0;
    int count = 0;

public:
    int ping(int t) {
        records[end % 10001] = t;
        end++;
        count++;

        while (records[start % 10001] < t - 3000) {
            start++;
            count--;
        }
        return count;
    }
};