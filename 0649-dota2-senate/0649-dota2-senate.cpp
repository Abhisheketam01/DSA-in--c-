class Solution {
public:
    string predictPartyVictory(string senate) {
        // calculate length of senate
        int N = senate.length();
        // queue index approach
        queue<int> QR, QD;
        for(int i = 0; i < N; i++){
            if( senate[i] == 'R') QR.push(i);
            else QD.push(i);
        }
        while( !QR.empty() && !QD.empty()){
            int R_index = QR.front(); QR.pop();
            int D_index = QD.front(); QD.pop();

            if( R_index < D_index){
                QR.push( R_index + N);
            } else {
                QD.push( D_index + N);
            }
        }
        return QR.empty() ? "Dire" : "Radiant";
    }
};