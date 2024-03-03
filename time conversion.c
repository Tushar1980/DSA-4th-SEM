#include <stdio.h>
#include <stdlib.h>

int main()
{
   int h,m,s,t;
   printf("Enter the values of hours,minutes and seconds respectively\n");
   scanf("%d%d%d",&h,&m,&s);

   t = (h*3600) + (m*60) + s;

   printf("Total time in seconds = %d",t);
    return 0;
}
