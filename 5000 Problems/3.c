/*
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
*/

#include <stdio.h>

void dailyTemperatures(int temperatures[], int n, int answer[]) {
    for (int i = 0; i < n; i++) {
        answer[i] = 0; // Initialize answer array with 0
        for (int j = i + 1; j < n; j++) {
            if (temperatures[j] > temperatures[i]) {
                answer[i] = j - i;
                break;
            }
        }
    }
}

int main() {
    int n;

    // Take user input for the number of temperatures
    printf("Enter the number of temperatures: ");
    scanf("%d", &n);

    int temperatures[n];

    // Take user input for the temperatures array
    printf("Enter the temperatures:\n");
    for (int i = 0; i < n; i++) {
        printf("Temperature[%d]: ", i);
        scanf("%d", &temperatures[i]);
    }

    int answer[n];

    // Calculate the answer array
    dailyTemperatures(temperatures, n, answer);

    // Display the output
    printf("Output: [");
    for (int i = 0; i < n - 1; i++) {
        printf("%d, ", answer[i]);
    }
    printf("%d]\n", answer[n - 1]);

    return 0;
}


