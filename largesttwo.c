/* Program that finds the two largest numbers */

#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest);

int main(void)
{
    int b[N], i, max, second;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    find_two_largest(b, N, &max, &second);

    printf("Largest: %d\n", max);
    printf("Second Largest: %d\n", second);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest){
    int *p;
    *largest = *a;
    *second_largest = *a;

    for (p = a+1; p < a + n; p++)
        if (*p > *largest)
            *largest = *p;

    for (p = a+1; p < a + n; p++)
        if (*p > *second_largest && *p != *largest)
                *second_largest = *p;
}

