#include <stdio.h>
#include <string.h>

// Function to reverse the input string
void reverseString(char* str){
    int length = strlen(str);   // Calculate the length of the string
    int i, j;
    char temp;

    // Loop through the string swapping characters from start to end
    // and from end to start
    for(i = 0, j = length - 1; i < j; i++, j--){
        temp = str[i];          // Store the character at position i in temp
        str[i] = str[j];        // Set character at position i to character at position j
        str[j] = temp;          // Set character at position j to temp (which contains character at position i)
    }
}

int main(){
    char str[100];              // Declare an array to store the input string

    printf("Enter a string: ");
    scanf("%99s", str);         // Read the input string from the user, limiting input to 99 characters to prevent buffer overflow

    printf("Original String: %s\n", str);   // Print the original string

    reverseString(str);         // Call the function to reverse the string

    printf("Reversed String: %s\n", str);   // Print the reversed string

    return 0;
}
