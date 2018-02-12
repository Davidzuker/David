#include <stdio.h>
int main()
{
int A, n,first=0,next=1,sum;
clrscr();
printf("Enter series range:");
scanf("%d",&n);
printf("Fibonacci Series:");
for(A=0;A<n;A++)
{
printf("\n%d",first);
sum=first+next;
first=next;
next=sum;
}
getch();
return 0;
}
