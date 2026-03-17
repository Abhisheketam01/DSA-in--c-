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