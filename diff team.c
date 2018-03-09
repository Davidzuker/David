#include <stdio.h>
void main()
{
int n1,n2,i;
printf("\n Enter a number:");
for(i=1;i<=3;i++)
{
scanf("%d %d\n",&n1,&n2);
if(n1>n2)
{
printf("\n%d",n1-n2);
}
else
{
printf("\n%d",n2-n1);
	}
	}
	return 0;
}
