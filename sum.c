#include<stdio.h>
int main()
{
int s=0,a,d,n,i;
scanf("%d%d%d",&n,&a,&d);
for(i=1;i<=n;i++)
{
s=s+a;
a=a+d;
}
printf("%d",s);
return 0;
}
