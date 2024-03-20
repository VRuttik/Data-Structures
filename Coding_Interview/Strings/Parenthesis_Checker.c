#include <stdio.h>
#include <stdbool.h>

// Function to check if expression has balanced parentheses
bool isBalanced(char *exp) {
    int count = 0; // Counter to keep track of open brackets

    while (*exp) {
        if (*exp == '(' || *exp == '{' || *exp == '[')
            count++;
        else if (*exp == ')' || *exp == '}' || *exp == ']') {
            if (count == 0) // No matching opening bracket found
                return false;
            count--; // Matching closing bracket found
        }
        exp++;
    }

    return count == 0; // If count is 0, all opening brackets have been matched
}

int main() {
    char exp[100];

    printf("Enter the expression: ");
    scanf("%s", exp);

    if (isBalanced(exp))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
