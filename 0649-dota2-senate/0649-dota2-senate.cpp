class Solution{
public:
    string predictPartyVictory(string senate){
        int N = senate.length();
        // trap approach ban
        //step 1 . count R and CountD
        int COUNTD= 0;
        int COUNTR = 0;
        for( char c : senate ){
            if ( c == 'R') COUNTR++;
            else COUNTD++;
        }
        // THE GAME STARTS FROM HERE 
        int trapD = 0, trapR= 0, i = 0;
        while( COUNTD > 0 && COUNTR > 0){
            if( senate[i] == 'R'){
                if( trapR > 0) { senate[i] = 'X'; trapR--; COUNTR--;}
                else { trapD++;}
            }else if( senate[i] == 'D'){
                if(trapD > 0){ senate[i] = 'X'; trapD--; COUNTD--;}
                else { trapR++;}
            }
            i = ( i + 1) % N;
        }
        return COUNTR > 0 ? "Radiant" : "Dire";
    }
};