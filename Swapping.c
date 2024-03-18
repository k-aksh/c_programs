#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,8,10};
	int temp;
	temp=arr[2];
	arr[2]=arr[4];
	arr[4]=temp;
	printf("%d %d",arr[4],arr[2]);
	return 0;
}
