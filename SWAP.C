#include<stdio.h>
int main(void)
{
  int G,H,temp;
  scanf("%d %d",&G,&H);
  temp=G;
  G=H;
  H=temp;
  printf("%d %d",G,H);
return 0;
}
