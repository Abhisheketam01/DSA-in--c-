class Solution {
public:
    string predictPartyVictory(string senate) {
        bool R_exists = true, D_exists = true;
        int n = senate.length();
        
        while (R_exists && D_exists) {
            R_exists = false;
            D_exists = false;
            for (int i = 0; i < n; i++) {
                if (senate[i] == 'R') {
                    R_exists = true;
                    // Hunt for the next 'D'
                    int j = (i + 1) % n;
                    while (senate[j] != 'D' && j != i) j = (j + 1) % n;
                    if (j != i) senate[j] = 'X'; // Found and banned
                } else if (senate[i] == 'D') {
                    D_exists = true;
                    // Hunt for the next 'R'
                    int j = (i + 1) % n;
                    while (senate[j] != 'R' && j != i) j = (j + 1) % n;
                    if (j != i) senate[j] = 'X'; // Found and banned
                }
            }
        }
        return R_exists ? "Radiant" : "Dire";
    }
};