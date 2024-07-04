/*
25. Write a program to find the last instance of occurence of a sub-string within a string. 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], sub[100];
    int str_len, sub_len, i, j, last_index = -1;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    getchar(); // Consume the newline character left in the input buffer

    // Input substring to find
    printf("Enter a substring: ");
    scanf("%s", sub);

    str_len = strlen(str);
    sub_len = strlen(sub);

    // Find the last occurrence of the substring within the string
    for (i = 0; i <= str_len - sub_len; i++) {
        int match = 1;
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            last_index = i;
        }
    }

    if (last_index != -1) {
        printf("\nLast occurrence of '%s' found at index: %d\n", sub, last_index);
    } else {
        printf("\n'%s' not found in the string.\n", sub);
    }

    return 0;
}
