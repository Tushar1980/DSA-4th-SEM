#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int arr[50], n, i, sum=0;
    srand(time(0));

    n = rand() % 100 + 1;
    printf("Number of elements: %d\n", n);
      for (i = 0; i < n; i++)
      {
        arr[i] = rand() % 100 + 1;
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
 printf("Sum = %d\n",sum);
 return 0;
}
