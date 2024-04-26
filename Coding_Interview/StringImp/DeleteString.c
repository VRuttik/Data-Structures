#include<stdio.h>
#include<string.h>

int main() {
    char text[200], str[20], new_text[200];
    int i = 0, j = 0, n = 0, copy_loop = 0;

    printf("\nEnter the main text: ");
    scanf("%[^\n]%*c", text);

    printf("\nEnter the string to be deleted: ");
    scanf("%[^\n]%*c", str);

    while (text[i] != '\0') {
        j = 0;
        copy_loop = i; // Initialize copy_loop with i

        while (text[copy_loop] == str[j] && str[j] != '\0') {
            copy_loop++;
            j++;
        }

        if (str[j] == '\0') {
            i = copy_loop; // Move i to the end of matched substring
        }

        new_text[n] = text[i];
        i++;
        n++;
    }

    new_text[n] = '\0'; // Correct null termination
    printf("\nThe new string is: %s\n", new_text);

    return 0;
}