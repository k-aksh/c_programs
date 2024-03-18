#include<stdio.h>

int main() {
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int x, i;
    printf("Enter the number to be found: ");
    scanf("%d", &x);
    
    for (i = 0; i < 10; i++) {
        if (arr[i] == x) {
            printf("The given number is found at index %d", i);
            break; // Stop the loop once the element is found
        }
    }
    
    if (i == 10) {
        printf("Element not found");
    }

    return 0;
}
