#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[50];
	int i,flag=0;
	printf("\nenter the string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
