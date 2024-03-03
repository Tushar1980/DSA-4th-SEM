#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the values of 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is largest\n");
    }
    else if(b>a && b>c)
    {
        printf("B is largest\n");
    }
    else if(c>a && c>b)
    {
        printf("C is largest\n");
    }
return 0;
}
