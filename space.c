#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int n,i,count=0;
	scanf("%[^\t\n]s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	   if(s[i]==' ')
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
