class Solution{
public : 
    int largestAltitude(vector<int>& gain){
        int currentAltitude = 0;
        int maxAltitude = 0;
        // which loop to use mf?
        for(int i = 0 ; i < gain.size(); i++){
            currentAltitude = currentAltitude + gain[i];
            if(currentAltitude > maxAltitude){
                maxAltitude = currentAltitude;
            }
        }
        return maxAltitude;
    }
};
/*
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0;
        int maxAltitude = 0;

        for (int g : gain) {
            currentAltitude += g;                 // simulate movement
            maxAltitude = max(maxAltitude, currentAltitude);  // track peak
        }

        return maxAltitude;
    }
};


*/


// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
        
//     }
// };
