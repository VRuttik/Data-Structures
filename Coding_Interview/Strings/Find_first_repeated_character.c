#include <stdio.h>
#include <string.h>

// Function to find the first repeated character
char findFirstRepeatedChar(char *str) {
    int count[256] = {0}; // Assuming ASCII characters
    
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Increment the count of current character
        count[str[i]]++;
        
        // If count becomes 2, it means character is repeated
        if (count[str[i]] == 2) {
            return str[i];
        }
    }
    
    return -1; // If no character repeats
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    
    char repeatedChar = findFirstRepeatedChar(str);
    
    if (repeatedChar != -1) {
        printf("Output: %c\n", repeatedChar);
    } else {
        printf("Output: -1\n");
    }
    
    return 0;
}
