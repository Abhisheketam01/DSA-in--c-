import java.util.Vector;
class Solution {
    public List<String> fizzBuzz(int n){
        // in java we use array list faster than vec in general
        // step 1
        List<String> result = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            if( i % 3 == 0 && i % 5 == 0 ){
                result.add("FizzBuzz");
            } else if( i % 3 == 0) {
                result.add("Fizz");
            } else if( i % 5 == 0){
                result.add("Buzz");
            } else {
                result.add(String.valueOf(i));
            }
        }
        return result;
    }
}
/*
// Default: Convert the number i to a String
            else {
                result.add(String.valueOf(i));
 */



// import java.util.Vector;
// class Solution {
//     public List<String> fizzBuzz(int n) {
//         // how to create a vector array in java ?
//         Vector<String> vec = new Vector<>();
//         while(n <= 0){
//             if( n % 3 == 0 && n % 5 == 0){
//                 vec.add("FizzBuzz");
                
//             } else if( n % 3 == 0 ){
//                 vec.add("Fizz");
//             } else if(n % 5 == 0){
//                 vec.add("Buzz");
//             } else if(n % 3 != 0 && n %5 != 0){
//                 vec.add("n");
//             }
//             n--;
//         }
//         return vec;
//     }
// }
/*
1st mistake to learn -
here the sequence is 1 to n and not n to 1 understood clearly
2nd - while loop is not good here so use for loop
3rd - 



 */