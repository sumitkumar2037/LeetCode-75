/**
 *  Q.1071 GREATEST COMMON DIVISIOR OF STRINGS
 *   For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t 
 * (i.e., t is concatenated with itself one or more times).
    Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Constraints:

 *. 1 <= str1.length, str2.length <= 1000
 *. str1 and str2 consist of English uppercase letters.
 */
class Solution {
    public String gcdOfStrings(String str1, String str2) {
        // check if the strings are equal:
        if(str2.equals(str1))
        return str1;
        //assume str2 to be shortest but if it is greater then reverse the string 
        if(str2.length()>str1.length())
        return gcdOfStrings(str2,str1);

        // if str1 starts with str2 then and if str2 is the prefix of str1 then remove it in the str1
        if(str1.startsWith(str2))
        return gcdOfStrings(str1.substring(str2.length()),str2);

        //if no gcd possible between the strings:
        return "";

        
    }
}