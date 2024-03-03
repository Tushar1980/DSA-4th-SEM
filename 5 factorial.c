#include<stdio.h>
    int main()
{
    int i,sum=1;
    i=1;
    while(i<=5)
    {
        sum = sum*i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
