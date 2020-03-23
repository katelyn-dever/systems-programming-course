/* digits Program - Katelyn Dever */

#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &x, &y, &z);
	printf("The reverse is: %1d%1d%1d\n", z, y, x);

	return 0;
}
