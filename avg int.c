#include <stdio.h>
int main()
{
	int n,k=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		k=k+a[i];
	}
	int avg=k/n;
	printf("%d",avg);
	return 0;
}
