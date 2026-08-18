#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int largest;
    int second;

    for (i = 0; i < 5; i++)
    {
        printf ("Enter number %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    second = numbers[1];

    for (i = 1; i < 5; i++)
    {
        if(numbers[i] > largest)
        {
            second = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > second && numbers[i] != largest)
        {
            second = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", numbers[i]);

    return 0;
}