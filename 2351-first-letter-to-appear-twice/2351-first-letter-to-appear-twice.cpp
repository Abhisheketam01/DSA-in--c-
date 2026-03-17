class Solution {
public:
    char repeatedCharacter(string s) {
        // Algorithm - 
        /*
        1. define a set 
        2. loop throught the array - 
        3. if element is seen before [ reeated and relatively the 1st most ]
        4. return that char 
        5. else store - simple af.

        */
        unordered_set<char> set;
        for( char ch : s ){
            if(set.find(ch) != set.end()){
                return ch;
            } else {
                set.insert(ch);
            }
        }
        return ' '; 
    }
};

/*

// in simple we can treat array as a HashTable
// easy to copy and paste code but to write a code from scratch bol denge toh 99.99% competetition game se bhar ho jayegi , dont belongs to this crowd , learn to code from scratch in dsa 
// class Solution {
//     public char repeatedCharacter(String s) {
//         int[] seen = new int[26]; 
//         // only lowercase English letters
//         for (int i = 0; i < s.length(); i++) {
//             char ch = s.charAt(i);
//             int index = ch - 'a'; 
//             // map 'a' → 0, 'b' → 1, ..., 'z' → 25
//             if (seen[index] == 1) {
//                 return ch; 
//                 // found first repeating character
//             } else {
//                 seen[index]++;
//             }
//         }
//         return ' '; 
//         // won't reach here as per problem guarantee
//     }
// }
class Solution{
    public char repeatedCharacter(String s){
        int[] seen = new int[26];
        // only lowercase english letters
        for(int i = 0; i < s.length(); i++ ){
            char ch = s.charAt(i);
            int index = ch - 'a';
            // map 'a' -> 0 ; b gets 1  ; c gets 2 , like that...
            if( seen[index] == 1){
                return ch;
                // found first repeating chracter
            } else {
                seen[index]++;
            }
        }
        return 'v';
        // wont reach here as per problem guarantee
    }
}
*/