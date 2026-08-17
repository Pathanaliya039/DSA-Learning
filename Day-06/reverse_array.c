#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    for (i = 5; i >= 0; i--)
    { 
        printf("%d", numbers[i]);
    }

    return 0;
}