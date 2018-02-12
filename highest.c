#include <stdio.h>
int main(void) 
{
	int array[100];
	int a,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n the array elements are:");
	for(a=0;a<n;a++)
	{
		scanf("%d",&array[a]);
	}
	int max=array[0];
	int min=array[0];
	for(a=1;a<n;a++)
	{
		if(array[a]>max)
		{
			max=array[a];
		}
		if(array[a]<min)
		{
			min=array[a];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);
	return 0;
}
