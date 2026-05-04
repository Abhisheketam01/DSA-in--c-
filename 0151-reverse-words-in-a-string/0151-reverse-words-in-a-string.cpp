class Solution{
public:
    string reverseWords(string s){
        // logic here 
        // step 1 define string
        string ans = "";

        // step 2 define i
        int i = s.length() - 1;

        // step 3 run a while loop to find the 
        // last letter , we are doing traverse from last i
        while( i >= 0){
            while( i >=0 && s[i] == ' ') i--;
            if( i < 0) break;

            int j = i;

            while( i>= 0 && s[i] != ' ') i--;

            if(!ans.empty()) ans += " ";
            ans += s.substr(i + 1, j - i);
        }
        return ans;
    }
};