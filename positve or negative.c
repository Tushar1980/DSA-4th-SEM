#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the value of a=\n");
    scanf("%d",&a);
    if(a>0)
        printf("Positive\n");
    else if(a<0)
        printf("Negative\n");
    else
        printf("Neither Positive nor negative\n");
}
