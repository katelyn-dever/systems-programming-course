/* Date Program - Katelyn Dever */

#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &x, &y, &z);
	printf("You entered the date %2d%2d%4d\n", x, y, z);

	return 0;
}
