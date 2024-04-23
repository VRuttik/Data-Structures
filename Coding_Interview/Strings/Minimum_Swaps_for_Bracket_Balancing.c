#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find minimum number of swaps required to balance the bracket sequence
int minimumNumberOfSwaps(char *str) {
    int n = strlen(str);
    int swaps = 0; // Count of swaps required
    int unbalanced = 0; // Count of unbalanced brackets

    // Create a stack to store indices of unbalanced brackets
    int *stack = (int *)malloc(n * sizeof(int));
    int top = -1; // Initialize stack top

    // Traverse the string
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            unbalanced++;
            stack[++top] = i; // Push the index of unbalanced bracket to the stack
        } else if (str[i] == ']') {
            if (unbalanced > 0) {
                unbalanced--;
                swaps += (i - stack[top]); // Calculate the swap count
                top--; // Pop from stack
            }
        }
    }

    free(stack); // Free allocated memory

    return swaps;
}

int main() {
    char str[100];
    printf("Enter the bracket sequence: ");
    scanf("%s", str);

    int minSwaps = minimumNumberOfSwaps(str);
    printf("Output: %d\n", minSwaps);

    return 0;
}
