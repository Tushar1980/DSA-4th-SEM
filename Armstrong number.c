#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,r,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
        r = n%10;
        sum = sum + r*r*r;
        n=n/10;
    }
    if(temp == sum)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
 return 0;
}
