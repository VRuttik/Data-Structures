/* Trapping Rain Water.
Input: height = [4,2,0,3,2,5]
Output: 9
*/

#include<stdio.h>

int trap(int height[], int n){
    if (n <= 2)
    {
        return 0; // Not enough bars to trap water.
    }

    int leftMax[n];
    int rightMax[n];

    // Initialize leftMax array
    leftMax[0] = height[0];
    for(int i=1;i<n;i++){
        leftMax[i] = (leftMax[i - 1] > height[i] ? leftMax[i - 1] : height[i]);
    }

    // Initialize rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n -2; i >= 0; --i)
    {
        rightMax[i] = (rightMax[i + 1] > height[i]) ? rightMax[i + 1] : height[i];
    }

    int trappedWater = 0;

    // Calculate trapped water for each bar.
    for(int i=0;i<n;i++){
        int minHeight = (leftMax[i] < rightMax[i]) ? leftMax[i] : rightMax[i];
        trappedWater += (minHeight - height[i]);
    }

    return trappedWater;
}

int main(){

    int n;
    printf("\nEnter the size of the elevation map: ");
    scanf("%d", &n);

    int height[n];
    printf("\nEnter %d elements for the elevation map:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
    }

    int result = trap(height, n);
    printf("\n The amount of trapped water is: %d\n", result);

    return 0;
}