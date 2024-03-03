#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P,T;
    float R,SI;
    printf("Enter the values of P,T and R respectively\n");
    scanf("%d%d%f",&P,&T,&R);
    SI = (P*T*R)/100;
    printf("Simple Interest = %f",SI);
    return 0;
}
