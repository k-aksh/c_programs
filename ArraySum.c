//Sum of an array
/*#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,8,10};
	int sum=0;
	for(int i=0;i<=5-1;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}*/

//Sum of an array with unknown n
/*
  #include<stdio.h>
int main()
{
	int n;
	printf("Input the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Insert the elements in your array");
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The input array is: ");
	for(int i=0;i<=n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	int sum=0;
	for(int i=0;i<=n-1;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nThe sum of your array is : %d",sum);
	return 0;
}
*/
