#include<stdio.h>
int main()
{
    printf("%d\n",~(unsigned int)0/2);
    printf("%ld\n",~(unsigned long)0/2);
    return 0;
}
