/* Calculates number of vowels and average word length in a sentence */

#include <stdio.h>


int main(void)
{
	/* 
	v = vowel count
	sum = total number of letters
	count = number of words 
	*/
	char x;
	int v = 0, sum = 0, count = 1;
	float avg;

	printf("Enter a sentence, press [Enter] to complete: \n");
	while((x = getchar()) != '\n')
	{
		switch (x)
		{
			case 'a':
				v += 1;
				sum += 1;
				break;
			case 'e':
				v += 1;
				sum += 1;
				break;
			case 'i':
				v += 1;
				sum += 1;
				break;
			case 'o':
				v += 1;
				sum += 1;
				break;
			case 'u':
				v += 1;
				sum += 1;
				break;
			case ' ':
				count += 1;
				break;
			default:
				sum += 1;
				break;
		}
	}

	avg = sum/(float)count;

	printf("\nYour sentence has %d vowels and an average of %.2f letters per word. \n", v, avg);

	return 0;

}