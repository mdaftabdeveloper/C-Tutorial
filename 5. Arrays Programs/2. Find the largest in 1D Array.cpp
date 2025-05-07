#include<stdio.h>
int main()
{
	int arr[20];
	int i;
	int size;
	
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("Enter the element at %d index: ",i);
		scanf("%d",&arr[i]);
	}
	int largest = arr[0];
	for(i=0; i<size; i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
			
		}
		
	}
	printf("Largest element is %d : ",largest);
			
	
	return 0;
}



