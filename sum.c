#include<stdio.h>
int main()
{
int s=0,a,b,c,i;
scanf("%d%d%d",&c,&a,&b);
for(i=1;i<=c;i++)
{
s=s+a;
a=a+b;
}
printf("%d",s);
return 0;
}
