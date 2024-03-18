#include<stdio.h>
int main()
{
	int i, j;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &i, &j);
	int arr[i][j];
	for(int a = 0; a < i; a++)
	{
		for(int b = 0; b < j; b++)
		{
			scanf("%d", &arr[a][b]);
		}
	}
	for(int a = 0; a < i; a++)
	{
		for(int b = 0; b < j; b++)
		{
			printf("%d ", arr[a][b]);
		}
		printf("\n"); // Print a newline after each row
	}
	return 0;
}
