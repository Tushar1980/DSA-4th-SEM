#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   printf("Enter the character\n");
   ch = getchar();
   (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ?
                      printf("Alphabet\n") :
                      printf("Not Alphabet\n");
            return 0;
}
