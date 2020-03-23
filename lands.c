/* Finds the largest and smallest of four integers entered by a user */

#include <stdio.h>

int main(void){
	
	int p, q, r, s, min1, max1, min2, max2;

	printf("This program accepts four integers and finds the largest and smallest.\n");

	printf("Enter four integers, separated by spaces: \n");
	scanf("%d %d %d %d", &p, &q, &r, &s);

	if (p > q) 
	{
		max1 = p;
		min1 = q;
	}
	else 
	{ 
		max1 = q; 
		min1 = p;
	}

	if (r > s) 
	{
		max2 = r;
		min2 = s;
	}
	else
	{
		max2 = s;
		min2 = r;
	}

	if (max1 > max2)
	{
		printf("Largest: %d \n", max1);
	}
	else
	{
		printf("Largest: %d \n", max2);
	}

	if (min1 > min2)
	{
		printf("Smallest: %d \n", min2);
	}
	else
	{
		printf("Smallest: %d \n", min1);
	}

	return 0;
}