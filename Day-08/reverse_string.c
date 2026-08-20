#include <stdio.h>

int main()
{
    char name[50];
    int i;
    int length = 0;

    printf("Enter a word:");
    scanf("%s", name);

    while (name[length] != '\0')
    {
        length++;
    }

    printf("Reveraed =");

    for (i = length - 1; i >= 0; i-- )
    {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}