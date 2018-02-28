#include <stdio.h>
int main() 
{
	int g,h;
	scanf("%d %d",&g,&h);
	int c;
	c=g-h;
	if(c%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
