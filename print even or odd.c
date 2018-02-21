#include <stdio.h>
int main() 
{
	int a,b,pro;
	printf("enter the number1:");
	scanf("%d",&a);
	printf("\nenter the number2:");
	scanf("%d",&b);
	pro=a*b;
	if(pro%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
