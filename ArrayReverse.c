#include<stdio.h>
int main()
{
	int arr[5]={1,3,5,7,9};
	int temp[5];
	for(int i=0;i<=4;i++)
	{
		temp[i]=arr[4-i];
	}
	for(int i=0;i<=4;i++)
	{
		arr[i]=temp[i];
	}
	for(int i=0;i<=4;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
