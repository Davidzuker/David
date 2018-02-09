#include <stdio.h>
int main(void) 
{
	char q[50];
	int n,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",q);
	for(n=0;str[n]!='\0';n++)
	{
		if(q[n]>='0' && q[n]<='9')
		{
			count=count+1;
		}
	}
	printf("\nthe number of numeric in the sentence is:%d",count);
	return 0;
}
