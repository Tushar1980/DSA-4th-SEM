#include<stdio.h>
#define pi 3.142
int main()
{
    int r;
    float A;
    printf("Enter the value of radius\n");
    scanf("%d",&r);
    A = pi*r*r;
    printf("Area of Circle  = %f",A);
    return 0;
}
