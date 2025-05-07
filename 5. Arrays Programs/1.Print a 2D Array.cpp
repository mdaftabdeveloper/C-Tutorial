#include<stdio.h>
int main()
{
	int arr[10][10];
	int rows,columns;
	int i,j;
	int x,y;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("\nEnter the elements of the array at [%d][%d] index: ",i,j);
			scanf("%d",&arr[i][j]);
			
			
			
		}
		
	}
	
	
	for(x=0; x<rows; x++)
	{
		for(y=0; y<columns; y++)
		{
			printf("\nElement at index [%d][%d] is %d \n",x,y,arr[x][y]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
