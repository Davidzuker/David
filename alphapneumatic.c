#include <stdio.h>
#include<string.h>
int main() 
{
	char str[50];
	int i,k;
	printf("\nenter the alphanumeric string:\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<k;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}