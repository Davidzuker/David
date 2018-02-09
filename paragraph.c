#include <stdio.h>
int main(void) 
{
	char o[50];
	int i,count=1;
	printf("enter the sentence:");
	scanf("%[^\n]s",o);
	for(i=0;str[i]!='\0';i++)
	{
		if(o[i]=='.')
		{
			count=count+1;
		}
	}
	printf("\no of lines is=%d",count);
	return 0;
}
