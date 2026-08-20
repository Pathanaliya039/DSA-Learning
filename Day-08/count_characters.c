#include <stdio.h>

int main()
{
    char name[50];
    int i = 0;
    int count = 0;

    printf("Enter your name:");
    scanf("%s", name);

    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Number of Characters = %d\n",count);

    return 0;
}