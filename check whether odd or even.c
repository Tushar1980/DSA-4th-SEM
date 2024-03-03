#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a=\n");
    scanf("%d",&a);

    a%2 == 0 ? printf("Even number") :
               printf("Odd number");
        return 0;
}
