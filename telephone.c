/* Telephone program - Katelyn Dever */

#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("Enter phone number [(xxx)xxx-xxxx]: ");
	scanf("(%3d)%3d-%4d", &x, &y, &z);
	printf("You entered %3d.%3d.%4d\n", x, y, z);

	return 0;
}
