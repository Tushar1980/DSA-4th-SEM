#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[50], n, i;
      srand(time(0));

    n = rand() % 100 + 1;

    printf("Number of elements: %d\n", n);

    for (i = 0; i < n; i++)
    {

        arr[i] = rand() % 100 + 1;
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
