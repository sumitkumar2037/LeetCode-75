//   Q.1768 MERGE STRINGS ALTERNATELY:

/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Constraints:

------>    1 <= word1.length, word2.length <= 100
------>    word1 and word2 consist of lowercase English letters.



*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // take two pointer for each string and iterate it accordingly:
        int p_1=0,p_2=0;
        string ans="";
        // if turn will be true then append the word1[i] else append word2[j]
        bool turn=true;// to add first char of word1
        int n=word1.length(),m=word2.length();
        while(p_1<n && p_2<m)
        {
           if(turn)
           {
            ans+=word1[p_1];
            turn=false;
            p_1++;
           }
           else
           {
            ans+=word2[p_2];
            turn=true;
            p_2++;

           }
        }
        // appending the remaining character:
        while(p_1<n)
        {
            ans+=word1[p_1];
            p_1++;

        }
        while(p_2<m)
        {
            ans+=word2[p_2];
            p_2++;
        }

        return ans;
    }
};