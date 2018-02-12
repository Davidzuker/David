#include<stdio.h>
#include<conio.h>
void main()
{
char A[100],B[100];
int res;
clrscr();
printf("Enter A and B:");
gets(A);
gets(B);
res=strcmp(A,B);
if(res==0)
printf("Strings are equal");
else
printf("Strings are not equal");
getch();
}
int strcmp(char *A,char *B)
{
int i=0;
while(A[i]!='\0'||B[i]!='\0')
{
if(A[i]!=B[i])
return (B[i]-A[i]);
i++;
}
return 0;
}
