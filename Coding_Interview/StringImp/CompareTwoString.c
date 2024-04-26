#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[100];
    int i = 0, j = 0, len1 = 0, len2 = 0, same = 0;

    printf("\nEnter the first string: ");
    scanf("%[^\n]%*c", str1);

    printf("\nEnter the second string: ");
    scanf("%[^\n]%*c", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2) {
        while (i < len1) {
            if (str1[i] == str2[i]) {
                i++;
            } else {
                break;
            }
        }

        if (i == len1) {
            same = 1;
            printf("\nThe two strings are equal");
        }
    } else {
        printf("\nThe two strings are not equal");
    }

    if (same == 0) {
        if (str1[i] > str2[i]) {
            printf("\nstring1 is greater than string2");
        } else if (str1[i] < str2[i]) {
            printf("\nstring2 is greater than string1");
        }
    }

    return 0;
}
