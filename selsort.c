/* Program that accepts integers and uses Selection Sort Algorithm */

#include <stdio.h>

#define N 5

/* funciton declaration */
void sel_sort(int a[], int n);

int main(void)
{
    int i, nums[N];

    /* start program, get numbers to sort*/
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &nums[i]);

    /* call function */
    sel_sort(nums, N);

    /* prints after sort */
    printf("Your sorted numbers: ");
    for (i = 0; i < N; i++)
        printf("%d ", nums[i]);

    printf("\n");
    return 0;
}

/* selection sort function */
void sel_sort(int a[], int n)
{
    /* catches if empty */
    if (n == 0) return;

    /* counter and next */
    int i, x = 0;

    /* sorting loop */
    for (i = 1; i < n; i++)
        if (a[i] > a[x])
            x = i;

    i = a[n-1];
    a[n-1] = a[x];
    a[x] = i;
    

    /* recursive call */
    sel_sort(a, n - 1);
}