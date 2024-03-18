#include<stdio.h>

int main() {
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 1, 1}};
    int maxCount = 0;

    for(int i = 0; i < 3; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
        }
    }

    printf("Maximum count of 1s in a row: %d\n", maxCount);

    return 0;
}
