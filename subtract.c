#include <stdio.h>
int main(void) {
	int m,n,o,p,min1,min2,tmin1,tmin2,sub,result,result1;
	scanf("%d %d",&m,&n);
	scanf("%d %d",&o,&p);
	min1=m*60;
	min2=o*60;
	tmin1=min1+n;
	tmin2=min2+p;
	sub=tmin1-tmin2;
	result=sub/60;
	printf("%d\t",result);
	result1=sub%60;
	if(result1==0)
	{
	printf("0");
	}
	else
	printf("%d",result1);
	return 0;	
	}
