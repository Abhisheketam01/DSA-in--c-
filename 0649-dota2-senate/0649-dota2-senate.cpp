class Solution {
public:
    string predictPartyVictory(string senate) {
        int N = senate.length();
        bool R_exist = true, D_exist = true;
        while( R_exist && D_exist ){
            R_exist = false;
            D_exist = false;
            for(int i = 0; i < N; i++){
                if( senate[i] == 'R'){
                    R_exist = true;
                    int j = ( i + 1 ) % N;
                    while( senate[j] != 'D' && j != i){
                        j = ( j + 1 ) % N;
                    }
                    if( j != i) senate[j] = 'X';   
                } else if (senate[i] == 'D'){
                    D_exist = true;
                    int j = ( i + 1 ) % N;
                    while( senate[j] != 'R' && j != i){
                        j = ( j + 1) % N;
                    }
                    if ( j != i) senate[j] = 'X'; 
                }
            }
        }
        return R_exist ? "Radiant" : "Dire";
    }
};