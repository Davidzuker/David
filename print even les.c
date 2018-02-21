#include<stdio.h>
#include<string.h>
void main()
{
char a1[100],a2[50];
int c;
printf("enter the string :");
scanf("%[^\n]a",&a1);
printf("enter the sub string :");
scanf("%s",&a2);
c=countof(a1,a2);
printf("the total count %d",c);
}
int countof(char * a1,char *a2)
{
int i,j,f,c;
int al1,al2;
al1=strlen(a1);
al2=strlen(a2);
c=0;
for(i=0;i<=al1-al2;i++)
{
f=1;
for(j=0;j<sl2;j++)
{
if(a1[i+j] != a2[j])
{
f=0;
break;
}
}
if(f==1)
{
c++;
}
}
return c;
}
