// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int size = flowerbed.size();
//         for (int i = 0; i < size; i++){
//             if (flowerbed[i] == 0) {
//                 bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
//                 bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);
//                 if (leftEmpty && rightEmpty) {
//                     flowerbed[i] = 1; // place flower
//                     n--;
//                     if (n == 0){
//                         return true;
//                     }
//                 }
//             }
//         }
//         return n <= 0;
//     }
// };









































class Solution{
public :
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        int size = flowerbed.size();
        for(int i = 0 ; i < size ; i++){
            if(flowerbed[i] == 0){
                bool leftempty = ( i == 0) || (flowerbed[i-1] == 0);
                bool rightempty = ( i == size - 1 ) || (flowerbed[i + 1] == 0);
                if(leftempty && rightempty){
                    flowerbed[i] = 1;
                    n--;
                    if(n == 0) return true;
                }
            }
        }
        return n <= 0;
    }
};