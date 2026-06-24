class Solution {
public:
    int maxArea(vector<int>& height) {
        int ArrSize = height.size();
        int i = 0, j = ArrSize - 1;
        int maxWater = 0;

        while( i < j ){
            int width = j - i;
            int Hlow = min(height[i], height[j]);
            int Area = width * Hlow;
            maxWater = max(maxWater, Area);
            if(height[i] > height[j]){
                j--;
            } else {
                i++;
            }
        }
        return maxWater;
    }
};