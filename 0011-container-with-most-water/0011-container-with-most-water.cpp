class Solution{
public:
    int maxArea(vector<int>& height){
        int i = 0;
        int ArrSize = height.size();
        int j = ArrSize - 1;
        int water = 0;
        while( i < j ){
            int width = j - i;
            int minH = min(height[i], height[j]);
            int maxwater = width * minH;
            water = max(maxwater, water);
            if(height[i] > height[j]){
                j--;
            }else {
                i++;
            }
        }
        return water;
    }
};