#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int i,n,sum = 1;
    i=1;
    srand(time(0));

    n = rand() % 10 + 1;
    printf("Size of series = %d\n",n);
    while(i <= n)
    {
        sum = sum * i;
        i++;
    }
    printf("%d",sum);
    return 0 ;
}
