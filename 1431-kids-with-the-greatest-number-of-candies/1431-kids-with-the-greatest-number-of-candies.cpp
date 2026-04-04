class Solution{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        int SZ = candies.size();
        int maxval =  INT_MIN;
        for(int i = 0; i < SZ; i++){
            if(candies[i] > maxval){
                maxval = candies[i];
            }
        }
        // upto now we have found the max value from the array
        vector<bool> result;
        for(int j = 0; j < SZ; j++){
            if( candies[j] + extraCandies >= maxval){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};

/*
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxval = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            maxval = max(maxval, candies[i]);
        }
        vector<bool> result;
        for(int i = 0; i < n ; i++){
            if((candies[i] + extraCandies ) >= maxval){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};
*/