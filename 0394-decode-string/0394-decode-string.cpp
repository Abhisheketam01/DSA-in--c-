#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        int i = 0; // index ref
        return decode(s, i);
    }

    string decode(const string& s, int& i) {
      string result = "";
      int num = 0;
      while(i < s.size()) {
        char c = s[i];
        if (isdigit(c)) {
          num = num * 10 + (c - '0'); // build number
          i++;
        } else if (c == '[') {
          i++;
          string inner = decode(s, i); // recurse
          for (int k = 0; k < num; k++) result += inner;
          num = 0; // reset
        } else if (c == ']') {
          i++; // skip ']'
          return result; // return to caller
        } else {
          result += c; // ok, normal char
          i++;
        }
      }
      return result;
    }
};

/*
class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        string ans="";
        stack<string>st;
        stack<int>num;
        int dig=0;
        string charformed="";
        for (char ch:s){
            if(isdigit(ch)){
                dig=dig*10+(ch-'0');
            }
            else if (ch=='['){
                st.push(ans);
                num.push(dig);
                dig=0;
                ans="";
            }
            else if (ch==']'){
                int repeated=num.top();
                num.pop();
                string formed=st.top();
                st.pop();
                string temp = ans;  
                ans = formed;
                while (repeated--){
                    ans+=temp;
                }
            }
            else{
                ans+=ch;
            }

        }
        return ans;
    }
};
*/