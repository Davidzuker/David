#include<stdio.h>
void main()
{
    int k1[50],k2,i;
    char bn[50],s1[50];
    printf("Bus timetable system \n");
     printf("enter bus name :\n");
    for(i=0;i<=4;i++)
    {
        scanf("%[^\n]s\n",bn[i]);
    }
    printf("enter the route:\n");
    for(i=0;i<=4;i++)
    {
    scanf("%[^\n]s\n",s1[i]);
}
printf("enter the time:");
for(i=0;i<=4;i++)
{
    scanf("%[^\n]d",k1[i]);
}
for(i=0;i<=4;i++)
{
printf("%s %s  %d",bn[i],s1[i],k1[i]);
}
}
