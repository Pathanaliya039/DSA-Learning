#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int even = 0;
    int odd = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &numbers[i]);

    }

    for (i = 0; i < 5; i++)
{
    if (numbers[i] % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
}

printf("Even numbers = %d\n", even);
printf("odd numbers = %d\n", odd);

return 0;

}