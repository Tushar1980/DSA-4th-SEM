#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        if(i%5!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }while(i<=25);
    return 0;
}
