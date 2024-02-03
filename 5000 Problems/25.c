/*
String to Integer.
*/

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char* s) {
    if (s == NULL) {
        return 0;
    }

    int index = 0;
    int sign = 1;
    long result = 0;

    // Step 1: Skip leading whitespaces
    while (s[index] == ' ') {
        index++;
    }

    // Step 2: Handle optional sign
    if (s[index] == '-' || s[index] == '+') {
        sign = (s[index++] == '-') ? -1 : 1;
    }

    // Step 3: Read digits until a non-digit character is encountered
    while (isdigit(s[index])) {
        result = result * 10 + (s[index++] - '0');

        // Check for integer overflow
        if (result * sign > INT_MAX) {
            return INT_MAX;
        } else if (result * sign < INT_MIN) {
            return INT_MIN;
        }
    }

    return (int)(result * sign);
}

int main() {
    char user_input[200];

    printf("Enter a string: ");
    scanf("%[^\n]s", user_input);

    int result = myAtoi(user_input);
    printf("Parsed integer: %d\n", result);

    return 0;
}
