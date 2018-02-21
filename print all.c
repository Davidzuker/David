#include <stdio.h>
int main() 
{
	int num,a,b=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		a=num%10;
		b=(b*10)+a;
		num=num/10;
	}
	num=b;
	while(num!=0)
	{
		a=num%10;
		printf("%d ",a);
		num=num/10;
	}
	return 0;
}
