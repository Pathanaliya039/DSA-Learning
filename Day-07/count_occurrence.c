#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int search;
    int count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search:");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            count++;
        }
    }

    printf("Number occurs %d times.\n",count);

    return 0;
}