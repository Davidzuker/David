#include <stdio.h>
int main()
{
	int f;
	scanf("%d",&f);
  int i=2;
	while(i<=f)
	{
		if(i==f)
		{
			printf("yes");
		}
		i=i*2;
	}
	return 0;
}
