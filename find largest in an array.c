#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[200], n, i, L;
    srand(time(0));

    n = rand() % 100 + 1;
    printf("Number of elements: %d\n", n);

    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    L = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > L)
        {
            L = arr[i];
        }
    }

    printf("Largest = %d\n", L);

    return 0;
}
