#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int i = 0, j, n;

    printf("\nEnter the string: ");
    scanf("%[^\n]%*c", str);

    printf("\nEnter the number of characters to be copied: ");
    scanf("%d", &n);

    // Ensure n is not greater than the length of str
    if (n > strlen(str)) {
        printf("\nError: Number of characters to be copied exceeds the length of the string.\n");
        return 1;
    }

    j = strlen(str) - n;

    // Reset i and j for copying the substring
    i = 0;
    j = strlen(str) - n;

    // Copy characters from str to substr
    while (str[j] != '\0') {
        substr[i] = str[j];
        i++;
        j++;
    }

    substr[i] = '\0';
    printf("\nThe substring is: %s\n", substr);

    return 0;
}
