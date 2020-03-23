/* Program that computes the given polynomial */

#include <stdio.h>

/*function declarations */
int power(int x, int y);
int equation(int x);

int main(void)
{
    int x;

    printf("This program calculates the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter an x value to compute: ");
    scanf("%d", &x);


    printf("Answer: %d\n\n", equation(x));

    return 0;
}

int power(int x, int n)
{
    if (n < 1)
        return 1;
    else
        /* recursive call the continues until the power is less than one */
        return x * power(x, n - 1);
}

int equation(int x)
{
    int answer;

    /* 3x^5 */
    answer  = 3 * power(x, 5);

    /* PLUS 2x^4 */
    answer += 2 * power(x, 4);

    /* MINUS 5x^3 */
    answer -= 5 * power(x, 3);

    /* MINUS x^2 */
    answer -= power(x, 2);

    /* PLUS 7x  */
    answer += 7 * x;

    /* MINUS 6 */
    answer - 6;
   
    return answer;
}