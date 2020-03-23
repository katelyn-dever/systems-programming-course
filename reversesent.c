/* Program that Reverses the Words in a Sentence */

#include <stdio.h>

#define N 50

int main(void)
{
    char input, term = 0, sent[N + 1] = {0};
    int i, x, last = N + 1;

    printf("Enter a sentence: ");

    for (i = 0; (input = getchar()) != '\n'; i++)
    {
        if (input == '.' || input == '?' || input == '!')
        {
            last = i;
            term = input;
            break;
        }
        sent[i] = input;
    }

    if (term == 0)
    {
        printf("Sentence needs a terminating character. (./?/!)\n\n");
        return 0;
    }

    printf("Your sentence in reverse is: ");
    for (i = last; i > 0; i--)
    {
        if (sent[i] == ' ')
        {
            for (x = i + 1; x != last; x++)
            {
                putchar(sent[x]);
            }
            last = i;
            putchar(sent[i]);
        }
    }
    while (sent[i] != '\0' && sent[i] != ' ')
    {
        putchar(sent[i++]);
    }
    printf("%c\n", term);

    return 0;
}