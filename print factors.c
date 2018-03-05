#include <stdio.h>
int main(void) 
{
	int n,m;
	printf("enter the number:");
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		if(n%m==0)
		{
			printf("%d ",m);
		}
	}
	return 0;
}
