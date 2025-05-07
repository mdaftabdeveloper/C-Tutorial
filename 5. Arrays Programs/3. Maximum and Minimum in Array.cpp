#include<stdio.h>
int main()
{
	int size;
	int arr[20];
	int i;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("Enter elements of array at %d index:",i);
		scanf("%d",arr[i]);
		
	}
	
	int min = arr[0];
	int max = arr[0];
	
	for(i=0; i<size; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
		
	}
	printf("Minimum element is %d",min);
	return 0;
}
