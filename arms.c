#include <stdio.h>
int main()
{
    int a, originalNumber, r, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &a);
    originalNumber = a;
    while (originalNumber != 0)
    {
        r = orsiginalNumber%10;
        result += r*r*r;
        originalNumber /= 10;
    }
    if(result == a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);
    return 0;
}
