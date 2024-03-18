#include <stdio.h>

int main() {
    int matrix[ROWS][COLS];
    printf("Enter elements for the matrix (%dx%d):\n", ROWS, COLS);
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find row(s) with maximum sum
    int maxSum = 0;
    int maxSumRow[ROWS]; // To store row number(s) with maximum sum
    for(int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for(int j = 0; j < COLS; j++) {
            rowSum += matrix[i][j];
        }
        if(rowSum > maxSum) {
            maxSum = rowSum;
            maxSumRow[0] = i; // Store the first row with maximum sum
        } else if(rowSum == maxSum) {
            maxSumRow[++maxSumRow[0]] = i; // Store additional row(s) with maximum sum
        }
    }

    // Display row number(s) with maximum sum
    printf("Row(s) with maximum sum:\n");
    for(int i = 1; i <= maxSumRow[0]; i++) {
        printf("%d\n", maxSumRow[i] + 1); // Adding 1 to convert index to row number
    }

    return 0;
}
