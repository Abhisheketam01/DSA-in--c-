class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int n = nums.size();
        int currentMax = nums[0];
        int OverAllmax = nums[0];
        for(int i = 1 ; i < n; i++){
            currentMax = max(nums[i], currentMax + nums[i]);
            OverAllmax = max(OverAllmax, currentMax);
        }
        return OverAllmax;
    }
};


/*
Bas 1 crore rupay aur khel khatm 
50 lakh = flat
2 lakh ki = gaadi
20 lakh ki = car
8 lakh = assets
20 lakh = gari banna deun vikun khaa , 
devala de 
yaar bhenchoo kese bhi karke 1 crore kamana pdeaga
i have to be more competetent i have to overpower,
how can i beat a guy who works 24x7 with same intensity , focus and obsession ?
because there is always a that damn mothetcukr.

*/