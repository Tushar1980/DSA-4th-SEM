#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n%10;
        sum = sum+r;
        n=n/10;
    }
   printf("Sum = %d",sum);
}
