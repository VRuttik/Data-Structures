/*
Create a function that takes two or more arrays and returns an array of their symmetric difference. The returned array must contain only unique values (no duplicates).
*/

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the symmetric difference of two arrays.

int* symDiff(int* arr1, int size1, int*arr2, int size2, int* resultSize){
    int* result = NULL;
    *resultSize = 0;

    for(int i=0;i<size1;i++){
        int existsInArr2 = 0;

        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                existsInArr2 = 1;
                break;
            }
        }

        if(!existsInArr2){
            // If the elements is not in arr1, add it to the result array
            result = realloc(result, (*resultSize + 1) * sizeof(int));
            result[*resultSize] = arr2[i];
            (*resultSize)++;
        }
    }
    return result;
}

int main(){

    int numArrays;

    // Get the number of arrays from the user
    printf("Enter the number of arrays: ");
    scanf("%d", &numArrays);

    int** arrays = malloc(numArrays * sizeof(int*));
    int* sizes = malloc(numArrays * sizeof(int));

    // Input each array from the user
    for(int i=0;i<numArrays;i++){
        printf("Enter the size of the array %d: ", i+1);
        scanf("%d", &sizes[i]);

        arrays[i] = malloc(sizes[i] * sizeof(int));

        printf("Enter elements for array %d separated by spaces: ", i + 1);
        for(int j=0;j<sizes[i];j++){
            scanf("%d", &arrays[i][j]);
        }
    }

    // Calculate symmetric difference
    int resultSize;
    int* result = arrays[0];

    for(int i=1;i<numArrays;i++){
        result = symDiff(result, sizes[i - 1], arrays[i], sizes[i], &resultSize);
        sizes[i] = resultSize; // Update size for the next iteration.
        free(arrays[i - 1]); // Free memory for the previous array
    }

    // Display the result
    printf("Symmetric Difference: { ");
    for(int i=0;i<resultSize;i++){
        printf("%d ", result[i]);
    }
    printf("}\n");

    // Free allocate memory

    free(result);
    free(arrays);
    free(sizes);

    return 0;
}