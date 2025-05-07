#include<stdio.h>
int main()
{
	int principal,rate,time,interest=0,amount=0;
	
	printf("Enter the principal: ");
	scanf("%d",&principal);
	
	printf("Enter rate: ");
	scanf("%d",&rate);
	
	printf("Enter time in Years: ");
	scanf("%d",&time);
	
	interest = (principal*rate*time)/100;
	amount = principal + interest;
	
	printf("Simple interest is %d and Amount is %d",interest,amount);
	return 0;
}
