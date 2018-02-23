#include <stdio.h>
int main() 
{
	int array[20];
	int m,k,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&m);
	printf("\n enter the array elements:");
	for(k=0;k<m;k++)
	{
		scanf("%d",&array[k]);
	}
	for(k=0;k<m;k++)
	{
		if(array[k]>max)
		{
			max=array[k];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
