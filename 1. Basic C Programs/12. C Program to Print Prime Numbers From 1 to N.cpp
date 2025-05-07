#include<stdio.h>
int main()
{
	int ul;
	printf("Please enter the upper limit: ");
	scanf("%d",ul);
	
	
	for(int i=2; i<=ul;i++)
	{
		for(int j=i;j*j<i;j++)
		{
			if(i%j==0)
			{
				printf("%d",i);
				
			}
		}
		
	}
	return 0;
	
}
