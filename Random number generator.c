#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
    srand(time(0));
printf("Random Numbers Are:\n");
for(i=0;i<10;i++)
{
printf("%d\n",rand()%100+1);
}

}
