#include <stdio.h>
#include <string.h>
void main()
{
    char k[200];
    int c=0,i;
    scanf("%[^\n]k", k);
    for (i = 0;k[i] != '\0';i++)
    {
        if (k[i] == ' ')
            c++;    
    }
    printf("%d\n", c + 1);
}
