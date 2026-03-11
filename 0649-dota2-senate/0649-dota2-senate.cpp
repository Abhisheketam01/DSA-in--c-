class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.length();
        int countR = 0, countD = 0;
        for (char c : senate) {
            if (c == 'R') countR++;
            else countD++;
        }
        
        int trapR = 0, trapD = 0, i = 0;
        while (countR > 0 && countD > 0) {
            if (senate[i] == 'R') {
                if (trapR > 0) { senate[i] = 'X'; trapR--; countR--; }
                else { trapD++; }
            } else if (senate[i] == 'D') {
                if (trapD > 0) { senate[i] = 'X'; trapD--; countD--; }
                else { trapR++; }
            }
            i = (i + 1) % n;
        }
        return countR > 0 ? "Radiant" : "Dire";
    }
};