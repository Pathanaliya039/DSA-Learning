#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int positive = 0;
    int negative = 0;

    for (i =0; i < 5; i++)
    {
        printf("Enter number  %d:", i +1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++);
    {
        if (numbers[i] > 0)
        {
            positive++;
        }
        
            else if (numbers[i] < 0)
            {
                negative++;
            }  
    }

    printf("Positive numbers = %d\n", positive);
    printf("Nagative numbers = %d\n", negative);

    return 0;
}