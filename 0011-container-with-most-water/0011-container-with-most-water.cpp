class Solution{
public:
    int maxArea(vector<int>& height){
        int ArrSize = height.size();
        int i = 0 , j = ArrSize  - 1;
        int maxWater = 0;

        while( i < j){
            int w = j - i;
            int h = min(height[i], height[j]);
            int Area = w * h;
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