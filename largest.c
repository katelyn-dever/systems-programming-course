/* Finds largest of 10 numbers */

#include <stdio.h>

#define N 10

int *find_max(int a[], int n);

int main(void)
{
    int i;
    int b[N], *Largest;

    printf("\nEnter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf(" %d", &b[i]);

    Largest = find_max(b, N);

    printf("Largest: %d\n\n", *Largest);

    return 0;
}

int *find_max(int a[], int n)
{
    int i, *max;

    max = &a[0];
    for (i = 1; i < n; i++)
        if (a[i] > *max)
            max = &a[i];

    return max;
}