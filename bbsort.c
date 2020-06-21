#include<stdio.h>
void bubble_sort(int n,int arr[]);
int main()
{
	int n=10;
	int arr[]={20,30,44,30,25, 80,11,2,12,32};
	bubble_sort(n,arr);
	for(int i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
}
void bubble_sort(int n,int arr[])
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
}
