#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_IP_LENGTH 16 // Maximum length of an IPv4 address (including null terminator)

int isValidPart(const char *part) {
    if (strlen(part) > 1 && part[0] == '0') // Leading zeros are not allowed
        return 0;
    
    int num = atoi(part); // Convert part to integer
    return (num >= 0 && num <= 255); // Check if the number is within the valid range
}

char** genIp(const char* S, int* returnSize) {
    int n = strlen(S);
    if (n < 4 || n > 12) { // Invalid length for IP address
        char** result = malloc(sizeof(char*));
        result[0] = "-1";
        *returnSize = 1;
        return result;
    }

    char** result = malloc(sizeof(char*) * 1000); // Assuming a maximum of 1000 IP addresses
    int count = 0;

    for (int i = 1; i < n && i < 4; i++) {
        for (int j = i + 1; j < n && j < i + 4; j++) {
            for (int k = j + 1; k < n && k < j + 4; k++) {
                char part1[4], part2[4], part3[4], part4[4];
                strncpy(part1, S, i); part1[i] = '\0'; // Extracting each part of the IP address
                strncpy(part2, S + i, j - i); part2[j - i] = '\0';
                strncpy(part3, S + j, k - j); part3[k - j] = '\0';
                strncpy(part4, S + k, n - k); part4[n - k] = '\0';

                if (isValidPart(part1) && isValidPart(part2) && isValidPart(part3) && isValidPart(part4)) {
                    char* ip_address = malloc(MAX_IP_LENGTH * sizeof(char));
                    sprintf(ip_address, "%s.%s.%s.%s", part1, part2, part3, part4); // Concatenating parts to form IP address
                    result[count++] = ip_address;
                }
            }
        }
    }

    if (count == 0) {
        result[0] = "-1";
        count = 1;
    }

    *returnSize = count;
    return result;
}
int main(){

    char input_string[100];
    printf("Enter a string: ");
    scanf("%d", input_string);

    int returnSize;
    char** result = genIp(input_string, &returnSize);

    printf("Possible IP addresses:\n");
    for(int i=0;i<returnSize;i++){
        printf("%s\n", result[i]);
        free(result[i]);
    }

    free(result);

    return 0;
}