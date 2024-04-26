#include<stdio.h>
#include<string.h>

int main(){

    char Source_str[100], Dest_str[200]; // Increased size to accommodate both strings
    int i = 0, j = 0;

    printf("\nEnter the source string: ");
    scanf("%[^\n]%*c", Source_str); // Read until newline character is encountered

    printf("\nEnter the Destination string: ");
    scanf(" %[^\n]%*c", Dest_str); // Read until newline character is encountered

    // Find the length of the destination string
    while(Dest_str[i] != '\0'){
        i++;
    }

    // Append a space
    Dest_str[i++] = ' ';

    // Append the source string to the destination string
    while(Source_str[j] != '\0'){
        Dest_str[i] = Source_str[j];
        i++;
        j++;
    }

    Dest_str[i] = '\0'; // Ensure the string is properly terminated

    printf("\nAfter appending, the destination string is: %s", Dest_str);

    return 0;
}
