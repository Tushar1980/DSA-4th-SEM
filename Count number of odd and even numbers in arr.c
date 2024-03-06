#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[100], n, i, even = 0, odd = 0;
    srand(time(0));

    n = rand() % 100 + 1;
    printf("Number of elements: %d\n", n);



    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("\n");

    printf("Even = %d\nOdd = %d\n", even, odd);

    return 0;
}
