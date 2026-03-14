// Trap approach
class Solution {
public:
    string predictPartyVictory(string senate) {
        /* single passs +  bans + memory eifficient 
        1.Counter intitial R and CountD;
        2. Keep two traps trapD and trapR
        3. 
        */
        int CountR = 0;
        int CountD = 0;
        int N = senate.length();
        for(char c : senate){
            if( c == 'R') CountR++;
            else CountD++;
        }
        int trapR = 0, trapD = 0, i = 0; 
        while( CountR > 0 && CountD > 0){
            if( senate[i] == 'R'){
                if(trapR > 0) {senate[i] = 'X'; trapR--; CountR--;}
                else { trapD++; }
            } else if( senate[i] == 'D'){
                if(  trapD > 0 ) { senate[i] = 'X'; trapD--; CountD--;}
                else { trapR++; }
            }
            i = ( i + 1 ) % N;
        }
        return CountR > 0 ? "Radiant" : "Dire";
    }
};