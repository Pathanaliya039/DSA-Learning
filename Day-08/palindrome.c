#include <stdio.h>

int main()
{
    char word[50];
    int length = 0;
    int i;
    int palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    while (word[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}