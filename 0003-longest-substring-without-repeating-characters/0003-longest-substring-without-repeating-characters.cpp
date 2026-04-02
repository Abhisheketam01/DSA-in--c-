class Solution{
public :
    int lengthOfLongestSubstring(string s){
        unordered_set<char> CharSet;
        int maxlength = 0;
        int left = 0;
        for(int right = 0 ; right < s.size(); right++){
            while(CharSet.count(s[right])){
                CharSet.erase(s[left]);
                left++;
            }
            CharSet.insert(s[right]);
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};
