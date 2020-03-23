/* Program that checks if an entered message is a palindrome, using pointers */

#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
    char *x, *y;
    char input, b[N] = {0};
    printf("\nEnter a message: ");

    x = &b[0];
    /* makes all characters lowercase for comparison before adding to array */
    /* now uses *x pointer */
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input))
            *x++ = input;

    y = x-1;
    x = &b[0];

    while (x < &b[0] + N)
    {
        if (*x == 0) {
            break;
        }
        /* the first time characters do not match, it is not a palindrome */
        if (*x != *y)
        {
            printf("Not a palindrome\n\n");
            return 0;
        }

        /* increment x, decrement y */
        x++, y--;
    }

    /* if it makes it through without error, it is a palindrome */
    printf("Palindrome\n\n");

    return 0;
}