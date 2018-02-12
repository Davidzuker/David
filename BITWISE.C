include<stdio.h>
void swap(int *C,int *D)
{
int temp=*C;
*C=*D;
*D=temp;
}
int main()
{
int C,D;
printf("enter C:");
scanf("%d",&C);
printf("enter C:");
scanf("%d",&D);
swap(&C,&D);
printf("after swapping C=%d and D=%d",C,D
return 0;
}
