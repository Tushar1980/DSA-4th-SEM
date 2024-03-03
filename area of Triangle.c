#include <stdio.h>
#include <stdlib.h>

int main()
{
     float Area;
     int b,h;
     printf("Enter the values of Base and Height respectively\n");
     scanf("%d%d",&b,&h);
     Area = (float)1/2 * b * h;
     printf("Area of Triangle = %f",Area);
     return 0;
}
