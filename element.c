#include<stdio.h>
#include<conio.h>
void main()
{
char k[100];
int i;
clrscr();
printf("Enter string:");
for(i=0;i<100;i++)
{
scanf("%c",&k[i]);
if(k[i]=='k')
{
break;
}
}
for(i=0;k[i]!='\0';i++)
{
printf("%c",k[i]);
}
getch();
}
