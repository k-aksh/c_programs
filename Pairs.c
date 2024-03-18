#include<stdio.h>
int main()
{
	int arr[6]={1,3,5,7,9,11};
	int x;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	int totalPairs=0;
	for(int i=0;i<=5;i++)
	{
		for(int j=i+1;j<=5;j++)
		{
			if(arr[i]+arr[j]==x)
			{
				totalPairs++;
			}
		}
	}
	printf("The total number of pairs are %d",totalPairs);
	return 0;
}
