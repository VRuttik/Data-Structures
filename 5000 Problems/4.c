/*
Given a string s, find the length of the longest 
substring
 without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include<stdio.h>
#include<string.h>

int lengthOfLongestString(char *s){
    
    int n = strlen(s);
    int maxLength = 0;

    int lastIndex[256];
    memset(lastIndex, -1, sizeof(lastIndex));

    int start = 0;

    for (int end = 0; end < n; end++)
    {
        
        if (lastIndex[s[end]] != -1)
        {
            start = (lastIndex[s[end]] > start) ? lastIndex[s[end]] + 1: start;
        }

        lastIndex[s[end]] = end;

        maxLength = (end - start + 1 > maxLength) ? end - start + 1: maxLength;
        
    }

   return maxLength;
    
}

int main(){

    char s[100];

    printf("Enter the string: ");
    scanf("%s", s);

    int result = lengthOfLongestString(s);

    printf("Output: %d\n", result);

    return 0;
}