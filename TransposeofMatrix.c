#include <stdio.h>

int main() {
    int r = 3, c = 4; // Define the dimensions of the matrices
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 1, 1}};
    int brr[4][3]; // Transposed matrix

    // Transpose the matrix arr and store it in brr
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i];
        }
    }

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
