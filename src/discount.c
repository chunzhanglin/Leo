#include<stdio.h>
int main()
{
    int n;
    double pay;
    scanf("%d",&n);
    if(n*95>=300)
    {
        pay=n*95*0.85;
    }
    else
    {
        pay=n*95;
    }
    printf("%.2lf\n",pay);
    return 0;
}
