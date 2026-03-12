class Solution{
public:
    string predictPartyVictory(string senate){
        int n = senate.length();
        int countR = 0, countD = 0;
        for(char c : senate){
            if( c == 'R') countR++;
            else countD++;
        }
        int trapR = 0, trapD = 0, i = 0;
        while( countR > 0 && countD > 0){
            if(senate[i] == 'R'){
                if(trapR > 0) { senate[i] = 'X'; trapR--; countR--;}
                else { trapD++;}
            } else if (senate[i] == 'D'){
                if( trapD > 0 ){ senate[i] = 'X'; trapD--; countD--;}
                else { trapR++; }
            }
            i = ( i + 1) % n;
        }
        return countR > 0 ? "Radiant" : "Dire";
    }
};

/*
Conclusion and summary - 
what it is ? and why it is?
1. IF I SEE R - I SEE IS THERE BAN ON ME - IF YES - THEN TURN ME INTO X , DO MY COUNT-- AND TRAPR--,
2. IF I SEE D - I SEE IS THERE ANY BAN ON ME - IF YES - THEN TURN ME INTO X , DO MY COUNTD--, TRAPD--;
3. IF THERE IS ANY ONE - R OR D AND IF THERE ISNT ANY BAN , I HAVE TO PUT BAN ON OTHER , ONLY WHEN TRAP=0
for every approach code - everyday 
*/