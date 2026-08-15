#include <stdio.h>

int main()
{
    int numbers;
    int i;

    printf("Enter a number:");
    scanf("%d", &numbers);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",numbers, i, numbers * i);
    }

    return 0;
}