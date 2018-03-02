#include <stdio.h>
int main() 
{
	int m,l,r;
	printf("\n enter the number:");
	scanf("%d",&m);
	printf("\n enter the left and right range:");
	scanf("%d %d",&l,&r);
	if(m>l && m<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
