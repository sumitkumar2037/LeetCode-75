/*
 Q.345 REVERSE VOWELS OF A STRINGS
 Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.

*/
class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            
            // Swap the vowels found at the start and end positions.
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};