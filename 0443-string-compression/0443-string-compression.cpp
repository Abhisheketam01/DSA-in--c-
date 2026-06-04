class Solution{
public:
    int compress(vector<char>& chars){
        int n = chars.size();
        int write = 0;
        int i = 0;

        while(i < n){
            int j = i;
            while(j <  n && chars[j] == chars[i]){
                j++;
            }
            chars[write++] = chars[i];

            int count = j - i;
            if(count > 1){
                string countStr = to_string(count);
                for(char c: countStr){
                    chars[write++] = c;
                }
            }
            i = j;
        }
        return write;
    }
};