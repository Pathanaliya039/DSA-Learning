#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int smallest;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    smallest = 5;

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < 5)
        {
            smallest = 5;
        }
    }

    printf("Smallest = %d\n",smallest);

    return 0;
}