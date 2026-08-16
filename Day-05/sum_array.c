#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    printf("sum = %d\n", sum);

    return 0;
}