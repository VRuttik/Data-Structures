#include<stdio.h>
#include<string.h>

void findDuplicates(char *str) {
    int count[256] = {0}; // Assuming ASCII characters

    // Count occurrences of each character
    for(int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Print duplicate characters
    printf("Duplicate characters in the string are: ");
    for(int i = 0; i < 256; i++) {
        if(count[i] > 1) {
            printf("%c ", i);
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Assuming no spaces in the string

    findDuplicates(str);

    return 0;
}
