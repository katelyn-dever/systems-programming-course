/* program computes the lowest terms of a fraction */

#include <stdio.h>

int main(void)
{
	int x, y, gcd, num1, num2, numerator, denominator, remainder;

	printf("This program takes a fraction and reduces it to it's lowest form.\n");
	printf("Enter a fraction (i.e. 4/16): \n");

	scanf("%d/%d", &x, &y);

	num1 = x;
	num2 = y;

	while (x != 0)
	{
		remainder = y % x;
		y = x;
		x = remainder;
	}

	gcd = y;

	numerator = num1 / gcd;
	denominator = num2 / gcd;

	printf("In lowest terms, the fraction is: %d/%d.\n", numerator, denominator);

	return 0;
}