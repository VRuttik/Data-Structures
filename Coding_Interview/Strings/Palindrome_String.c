#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// Function to check if a given string is a palindrome.
bool isPalindrome(char *str){
    int length = strlen(str);
    int i, j;

    // Compare characters from start and end of the string
    for(i = 0, j = length - 1; i < j; i++, j--) { // Changed the semicolons and added a comma
        // Ignore spaces and punctuation marks
        while(i < j && !isalnum(str[i]))
           i++;
        while(i < j && !isalnum(str[j]))
            j--;

        // If characters don't match, string is not a palindrome
        if(tolower(str[i]) != tolower(str[j])) // Removed the extra 'I' from tolower
            return false; 
    }
    // If the loop completes without finding any non-matching characters, string is a palindrome.
    return true;
}

int main(){

    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    if(isPalindrome(str)){
        printf("The string is a palindrome.\n");
    }
    else{
        printf("The string is not a palindrome.\n");
    }

    return 0;
}