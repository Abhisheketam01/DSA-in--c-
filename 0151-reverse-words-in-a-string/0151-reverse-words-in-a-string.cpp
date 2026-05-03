class Solution{
public:
    string reverseWords(string s){
        // lets say s = "Abhishek Deepak Etam"
        // step 1 
        // peso ke peeche pagal hu main kyu ki meri maa aur mera baap dono peso ke peche pagal hai 
        stringstream ss(s);
        // ss = "Abhishek Deepak Etam"

        // step 2 - create string word and create a vector string called words
        string word;
        vector<string> words;

        // step 3 - the thing is sstream automatically handles multiple spaves
        while(ss >> word){
            words.push_back(word);
        }
        // words = { "Abhishek", "Deepak", "Etam"}

        // step 4 - use reverse operation
        reverse(words.begin(), words.end());
        // - { "Etam", "Deepak", "Abhishek"}

        // step 5 - create a string called ans = "";
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            ans += words[i];
            if( i != words.size()-1) ans += " ";
        }
        return ans;
        // ans = "Etam Deepak Abhishek"
    }
};