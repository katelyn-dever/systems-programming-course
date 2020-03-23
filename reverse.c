/* Program that reverses the string pointed to by message. */

#include <stdio.h>
#include <string.h>

#define N 100

void reverse(char *message);

int main(void)
{
    char *p;
    char input, msg[N];

    printf("\nEnter a message: ");
    for (p = &msg[0]; p < &msg[0] + N; p++)
    {
        if ((input = getchar()) == '\n') break;
        *p = input;
    }
    *p = '\0';

    reverse(msg);

    printf("Reversal is: %s\n\n", msg);

    return 0;
}

void reverse(char *message)
{
    char *p1, *p2, temp;
    int n = strlen(message);

    p1 = message;
    p2 = message + n - 1;
    while (p1 <= p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++; p2--;
    }
}