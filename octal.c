/* Octal Program - Katelyn Dever */

#include <stdio.h>

int main(void)
{
	int x, i, j, oct=0, dx;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &x);

	dx=x;
	i=1;

	for(j = x; j > 0; j = j/8)
	{
		oct = oct + (j%8) * i;
		i = i * 10;
		x = x/8;
	}
     
	printf("\nIn octal, your number is %05d.\n\n",oct);
	
	return 0;
	
	
}
