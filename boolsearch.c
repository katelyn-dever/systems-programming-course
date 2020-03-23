/* Program that searches an array */

#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int key);

int main(void){

	int b[N], i, key, result;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    printf("Enter a key: ");
    scanf("%d", &key);

    result =  search(b, N, key);

    if (result == true){
    	printf("Result: true\n");
    }
    else {
    	printf("Result: false\n");
    }

}

bool search(const int a[], int n, int key){
    int *p;

    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;

    return false;
}