/*
Longest Substring Without Repeating Characters.

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include<stdio.h>
#include<string.h>

int lengthOfLongestSubstring(char* s){

    int n = 0;
    int start = 0;
    int maxLen = 0;
    int charIndex[256];// Assuming ASCII characters

    for(int i=0;i<256;i++){
        charIndex[i] = -1;
    }

    while (s[n] != '\0')
    {
        if(charIndex[s[n]] != -1 && charIndex[s[n]] >= start){
            start = charIndex[s[n]] + 1;
        }

        charIndex[s[n]] = n;
        n++;

        if(n - start > maxLen){
            maxLen = n - start;
        }
    }

    return maxLen;
}
int main(){

    char user_input[100];

    printf("\n Enter the string: ");
    scanf("%s", user_input);

    int result = lengthOfLongestSubstring(user_input);
    printf("Length of the longest substring without repeating characters: %d\n", result);

    return 0;
}