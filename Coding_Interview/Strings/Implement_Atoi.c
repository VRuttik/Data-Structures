#include <stdio.h>

int customAtoi(char *s) {
    // Initialize result
    int result = 0;
    
    // Initialize sign as positive
    int sign = 1;
    
    // Initialize index to traverse the string
    int i = 0;
    
    // If the first character is '-',
    // then update the sign
    if (s[0] == '-') {
        sign = -1;
        i++;
    }
    
    // Traverse the string and convert characters to integer
    while (s[i] != '\0') {
        // If the character is not a digit, return -1
        if (s[i] < '0' || s[i] > '9')
            return -1;
        
        // Update result by multiplying it by 10 and adding the digit
        result = result * 10 + (s[i] - '0');
        
        // Move to the next character
        i++;
    }
    
    // Return the result with proper sign
    return sign * result;
}

int main() {
    char input[100];
    
    // Prompt user for input
    printf("Enter a string: ");
    scanf("%s", input);
    
    // Call the customAtoi function and print the result
    int result = customAtoi(input);
    if (result == -1)
        printf("Output: -1\n");
    else
        printf("Output: %d\n", result);
    
    return 0;
}
