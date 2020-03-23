/* Reduces Fraction to lowest terms*/

#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int x, y, xred, yred;

    printf("\nEnter a fraction: ");
    scanf("%d/%d", &x, &y);

    reduce(x, y, &xred, &yred);

    printf("\nIn lowest terms: %d/%d\n\n", xred, yred);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int remainder;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    do
    {
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    } while (denominator != 0);

    *reduced_numerator = *reduced_numerator / numerator;
    *reduced_denominator = *reduced_denominator / numerator;
}