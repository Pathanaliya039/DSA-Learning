#include <stdio.h>

int main()
{
    int number;
    int i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n",factorial);

    return 0;
}