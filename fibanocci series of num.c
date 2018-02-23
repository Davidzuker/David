#include <stdio.h>
int main(void) 
{
int s=1,d=1,i,n,c;
printf("\n enter the range to print the Fibonacci numbers\n");
scanf("%d",&n);
printf("%d",s);
printf("\t%d",d);
for(i=1;i<=n-2;i++)
{
c=s+d;
printf("\t%d",c);
s=d;
d=c;
}
return 0;
}
