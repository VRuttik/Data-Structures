#include <stdio.h>
#include <string.h>

// Function to check if s2 is a rotated version of s1
int areRotations(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Check if lengths are equal and non-zero
    if (len1 != len2 || len1 == 0)
        return 0;

    // Concatenate s1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char s1[100], s2[100];

    // Input two strings from the user
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    // Check if s2 is a rotation of s1
    if (areRotations(s1, s2))
        printf("Output: 1\n");
    else
        printf("Output: 0\n");

    return 0;
}
