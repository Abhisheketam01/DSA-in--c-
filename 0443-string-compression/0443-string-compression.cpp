class Solution{
public:
    int compress(vector<char>& chars){
        int write = 0;
        int read = 0;

        while(read < chars.size()){
            char current = chars[read];
            int count = 0;

            while(read< chars.size() && chars[read] == current){
                read++;
                count++;
            }

            // write the character
            chars[write++] = current;

            // write the count if more than 1
            if(count > 1){
                string s = to_string(count);
                for(char c : s){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};