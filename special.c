#include<stdio.h>
int main()
{
char A[20];
int l,i,sum=0;
printf("Enter the string");
scanf("%s",A);
l=strlen(A);
for(i=0;i<l;i++)
{
  if(A[i]=='@'||A[i]=='*'||A[i]=='.'||A[i]=='#'||A[i]=='&'||A[i]=='^')
  {
    sum=sum+1;
  }
}
printf("Special character:%d",sum);
return 0;
}
