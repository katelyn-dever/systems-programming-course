#Katelyn Dever
#Assignment 1
#1/16/20

#include <stdio.h>

_Bool isMultiple5(int n)
{
	if (( n %5) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}

_Bool isMultiple3(int n)
{
	if (( n %3) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}

int main(void)
{
	int num;

	printf("Enter a number to check if it is a multiple of 3 or 5: ");
	scanf("%d", &num);

	printf("%d is a multiple of 3: ", num);
	isMultiple3(num);
	printf("%d is a multiple of 5: ", num);
	isMultiple5(num);
}