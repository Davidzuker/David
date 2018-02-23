#include <stdio.h>
int main() 
{
int l,m,temp;
printf("\n enter two numbers to swap:");
scanf("%d %d",&l,&y);
printf("\n before swapping:");
printf("\nl=%d",l);
printf("\nm=%d",m);
temp=l;
l=m;
m=temp;
printf("\n after swapping:");
printf("\nl=%d",l);
printf("\nm=%d",m);
return 0;
}
