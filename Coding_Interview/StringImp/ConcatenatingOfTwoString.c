#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[100], str3[200]; // Increased size to accommodate both strings and a space
    int i=0, j=0;

    printf("\nEnter the first string: ");
    scanf("%[^\n]%*c", str1);

    printf("\nEnter the second string: ");
    scanf("%[^\n]%*c", str2);

    // Copy the first string to the concatenated string
    while(str1[i] != '\0'){
        str3[j] = str1[i];
        i++;
        j++;
    }

    // Add a space to the concatenated string
    str3[j++] = ' ';

    i = 0;

    // Copy the second string to the concatenated string
    while (str2[i] != '\0'){
        str3[j] = str2[i];
        i++;
        j++;
    }

    str3[j] = '\0'; // Ensure the concatenated string is properly terminated

    printf("\nThe concatenated string is: %s", str3);

    return 0;
}
