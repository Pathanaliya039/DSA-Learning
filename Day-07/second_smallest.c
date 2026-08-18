#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int smallest;
    int second;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0];
    second = numbers[1];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < smallest)
        {
            second = smallest;
            smallest = numbers[1];
        }
        else if (numbers[i] < second && numbers[i] != smallest)
        {
            second = numbers[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", second);

    return 0;
}