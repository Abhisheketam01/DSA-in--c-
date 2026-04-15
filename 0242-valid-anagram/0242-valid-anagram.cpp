class Solution{
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }
        // step 2 map char , int
        unordered_map<char, int> charCounts;
        // tracking the tecord of each char - char and its frequency 
        for(char x : s){
            charCounts[x]++;
        }
        // step 4
        for(char x : t){
            // wo character mila he nahi and uska point is 0
            if(charCounts.find(x) == charCounts.end() || charCounts[x] == 0){
                return false;
            }
            charCounts[x]--;
        }
        return true;
    }
};