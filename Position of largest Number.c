#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[200], n, i, L, position;
    srand(time(0));

    n = rand() % 100 + 1;
    printf("Number of elements: %d\n", n);

    if (n <= 0 || n > 200) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    L = arr[0];
    position = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > L) {
            L = arr[i];
            position = i;
        }
    }


    printf("Position of largest number = %d\n", position);

    return 0;
}
