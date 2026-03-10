class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*
        Approach brute force-
        1. Create and 3rd array call it num3
        2. store elements of num1 and num2 in num3
        4. already sorted so no need to sort again
        5. if num3 size value is even e.g 4 a b c d 
        6. if num3 size value is odd e.g a b c 
        7. how to call a median in even num3 (size / 2 ) - 1 = medianEl=
        8. how to call a median in odd num3 is medianel = (size / 2) 
        */
        // lets create an array of size n + m;
        int m = nums1.size();
        int n = nums2.size();
        double medianEl;
        vector<int> nums3(n+m);
        int x = nums3.size();
        int k = 0;
        for(int i =0; i < m; i++){
            nums3[k++] = nums1[i];
        }
        for(int i = 0; i < n; i++){
            nums3[k++] = nums2[i];
        }
        sort(nums3.begin(), nums3.end());
        if(nums3.size() % 2 == 0){
            // even
           medianEl = (nums3[x / 2] + nums3[(x/2)-1]) / 2.00;
        }else{
            //odd size
            medianEl = nums3[x / 2];
        }
        return medianEl;
    }
};