include <stdio.h>
int main(void) {
	int K,temp;
	int a[10];
	for(K=0;K<10;K++)
	{
		scanf("%d",&a[K]);
	}
	for(K=0;K<10;K++)
	{		
			if(a[K]>a[K+1])
			{
				temp=a[K];
				a[K]=a[K+1];
				a[K+1]=temp;
			}
	}
	printf("%d",a[K]);
	return 0;
}
