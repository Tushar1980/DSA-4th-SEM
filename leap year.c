#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("Enter the value of a\n");
   scanf("%d",&a);
   if(a%4==0)
    printf("Leap year\n");
   else
      printf("Not Leap year\n");

return 0;
}
