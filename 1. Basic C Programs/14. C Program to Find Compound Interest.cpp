#include<stdio.h>
int main()
{
	int p,r,t,interest=0,amount=0;
	printf("Enter Principal: ");
	scanf("%d",&p);
	printf("Enter Rate: ");
	scanf("%d",&r);
	printf("Enter Time in Years: ");
	scanf("%d",&t);
	
	for (int i = 1;i<=t;i++)
	{
		interest = (p*r*i)/100;
		amount = p + interest;
		p=amount;
	}
	
	printf("Compound Interest is %d and Amount is %d",interest,amount);
	return 0;
}
