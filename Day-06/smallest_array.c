#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int smallest;

    for (i =0; i < 5; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Smallest = %d\n", smallest);

    return 0;
}