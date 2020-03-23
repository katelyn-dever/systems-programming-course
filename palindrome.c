/* Program that checks if an entered message is a palindrome, using integer variables */

#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
    int i, j; /* two counter variables for keeping track */
    char input, b[N] = {0};
    printf("\nEnter a message: ");

    i = 0;
    /* makes all characters lowercase for comparison before adding to array */
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input)) b[i++] = input;

    for (j = i-1, i = 0; i < N; i++)
    {
        if (b[i] == 0) {
            break;
        }

        /* the first time characters do not match, it is not a palindrome */
        if (b[i] != b[j])
        {
            printf("Not a palindrome\n\n");
            return 0;
        }

        /*decrement j counter from end */
        j--;
    }
    /* if it makes it through without error, it is a palindrome */
    printf("Palindrome\n\n");

    return 0;
}