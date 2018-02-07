#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, temp1, temp2, r, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &a, &b);
    printf("Armstrong numbers between %d an %d are: ", a, b);
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        // checks if number i is equal to the sum of nth power of its digits
        if (result == i) {
            printf("%d ", i);
        }
        // resetting the values to check Armstrong number for next iteration
        n = 0;
        result = 0;
    }
    return 0;
}
