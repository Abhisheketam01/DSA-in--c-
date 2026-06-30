class Solution{
public:
    int maxArea(vector<int>& height){
        // setting up warriors
        int ArrSize = height.size(); // size
        int i = 0 , j = ArrSize - 1;
        int MaxWater = 0;

        while( i < j ){
            // cal min(h) and cal w , multiply them and store them in result 
            int width = j - i;
            int minH = min(height[i],height[j]);
            int water = width * minH;
            MaxWater = max(MaxWater,water);
            if(height[i] > height[j]){
                j--;
            } else {
                i++;
            }
        }
        return MaxWater;
    }
};