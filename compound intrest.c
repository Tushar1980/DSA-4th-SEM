#include <stdio.h>
#include <math.h>

int main()
{
   int P,T;
   float R,CI;
   printf("Enter the values of P,T and R respectively\n");
   scanf("%d%d%f",&P,&T,&R);
   CI = P * pow((1 + R/100),T);

   printf("Compound Interest =%f",CI);
   return 0;
}
