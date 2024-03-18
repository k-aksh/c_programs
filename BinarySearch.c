#include<stdio.h>
int main()
{
	int i,low,high,mid,key;
	int n=10;
	int arr[10]={1,3,5,7,9,11,13,15,17,19};
	printf("Enter the element to be found: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		{
			low=mid+1;
		}
		else if(arr[mid]==key)
		{
			printf("%d found at location %d",key,mid+1);
			break;
		}
		else
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	if(low>high)
	{
		printf("Not found! %d isn't present in the list",key);
	}
	return 0;
}
