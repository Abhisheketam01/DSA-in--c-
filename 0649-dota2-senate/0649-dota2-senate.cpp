/*
use googling isstead of GEMINI OR GPT ,
googling makes humans smart.
3 approaches -
1.string del
2. string ban x
3.queue apprroach.
i know how to solve this problem
now the question is how ?
what excatly i have to do here.
we will write 3 appraoch.

problems i am facing right now -
while writing the solution without looking at answer i think
1. i am not able to write loops properly , how to nest it down , and
how to build a solution using those loops.

1. Algorithm -
2.Loop throught the string
3.when i find an active senator - then
4.start a second loop to find the "first"
5.active enemy to their right circularly.
6.marked that enemy is banned
7.repeat until one part is entirely gone.
*/

class Solution {
public:
    string predictPartyVictory(string senate) {
        bool R_exist = true, D_exist = true;
        int N = senate.length();
        while (R_exist && D_exist) {
            // we assume they all are flase at first.
            R_exist = false;
            D_exist = false;
            // outer loop to check each character - either R OR D
            for (int i = 0; i < N; i++) {
                if (senate[i] == 'R') {
                    R_exist = true;
                    // R is found now lets hunt that mffuking D at right side
                    int j = (i + 1) % N;
                    while (senate[j] != 'D' && j != i) {
                        j = (j + 1) % N;
                    }
                    if (j != i)
                        senate[j] = 'X'; // found and banned , khel khtm
                } else if (senate[i] == 'D') {
                    D_exist = true;
                    // hunts for th next 'R'
                    int j = (i + 1) % N;
                    while (senate[j] != 'R' && j != i) {
                        j = (j + 1) % N;
                    }
                    if (j != i)
                        senate[j] = 'X'; // D is found and banned , perfect.
                }
            }
        }
        return R_exist ? "Radiant" : "Dire";
    }
};
