#include <stdio.h>
#include<string.h>
int main() 
{
	char str[20];
	int n,i,f;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			f=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			f=2;
		}
		else
		{
			f=0;
		}
	}
	if(f==1 && f==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
