#include <stdio.h>

int main() {
    int i, n, f1 = 0, f2 = 1, f3;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("\n\n%d\n%d\n", f1, f2);

    for (i = 2; i < n; i++)
    {
        f3 = f1 + f2;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
    }

    return 0;
}
