/*
#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[6]={1,3,5,7,9,11};
	int smax=INT_MIN;
	int max=INT_MIN;
	for(int i=0;i<=5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(int j=0;j<=5;j++)
	{
		if(arr[j]!=max && arr[j]>smax)
		{
			smax=arr[j];
		}
	}
	printf("The second largest element in the given array is : %d",smax);
	return 0;
}
*/

//When order is neither descending nor ascending

/*
#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[6]={1,3,5,7,9,11};
	int smax=INT_MIN;
	int max=INT_MIN;
	for(int i=0;i<=5;i++)
	{
		if(max<arr[i])
		{
			smax=max;
			max=arr[i];
		}
		else if(smax<arr[i] && max!=arr[i])
		{
			smax=arr[i];
		}
	}
	
	printf("The second largest element in the given array is : %d",smax);
	return 0;
}
*/
