#include<stdio.h>
void main()
{
int a[10],i,b,t,j;
printf("enter the range");
scanf("%d",&b);
printf("enter the array values");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=0;j<b-i-1;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<b;i++)
{
printf("%d",a[i]);
}
}
