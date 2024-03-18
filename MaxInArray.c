#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[5]={2,4,6,8,10};
	int max=INT_MIN;
	for(int i=0;i<=4;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("The maximum value of the given array is %d",max);
	return 0;
}
