class Solution{
public:
    int maxArea(vector<int>& height){
        int ArrSize = height.size();
        int i = 0, j = ArrSize - 1;
        int maxwater = 0;

        while( i < j ){
            int width = j - i;
            int lowH = min(height[i], height[j]);
            int water = width * lowH;
            maxwater = max(maxwater, water);
            if(height[i] > height[j]){
                j--;
            } else {
                i++;
            }
        }
        return maxwater;
    }
};