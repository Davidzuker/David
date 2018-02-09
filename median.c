#include<stdio.h>
void main()
{
int a,sum=0,i,a[100];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<a;i++)
{
sum=sum+a[i];
}
printf("median is %d",sum/a;
}
