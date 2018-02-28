#include <stdio.h>
int main() 
{
	int m;
	scanf("%d",&m);
	int p=1;
	while(p<m)
	{
		p<<=1;
	}
	printf("%d",p);
	return 0;
}
