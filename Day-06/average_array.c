#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 5; i++)
    {
        printf("Enter numbers %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    average = sum /5.0;

    printf("Average = %.2\n", average);

    return 0;
}