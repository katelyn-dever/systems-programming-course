/* Program that returns the average word length of a given sentence */


#include <stdio.h>

#define LEN 50 /* max length of sentence */

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[LEN];

    printf("\nEnter a sentence: ");
    fgets(sentence, LEN, stdin);

    printf("Average word length: %.1f\n\n", compute_average_word_length(sentence));
    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int characters, words;
    char last_letter;

    characters = words = last_letter = 0; /* initializing to 0 */

    for (; *sentence != '\n'; sentence++)
    {
        if (*sentence != ' ')
        {
            characters++;
            if (words == 0)
                words++;
        }
        else if (last_letter != ' ')
            words++;
        last_letter = *sentence;
    }

    return (double) characters / words;
}