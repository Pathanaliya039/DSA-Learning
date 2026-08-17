#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int search;
    int found = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &search);
    }

    printf("Enter number to search:");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Number found.\n");
    }
    else
    {
        printf("Number not found.\n");
    }

    return 0;
}