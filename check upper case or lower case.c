#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   ch = getchar();
   (ch>='A' && ch<='Z') ?
               printf("Upper Case\n") :
               printf("Lower Case\n");
 return 0;
}
