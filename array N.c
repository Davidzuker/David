#include<stdio.h>
int main()
{
  int a[10],b;
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  b=a[0];
  for(i=0;i<10;i++)
  {
    if(a[0]>a[i])
    {
      b=a[i]);
    }
    printf("the largest number is %d",b);
  }
}
