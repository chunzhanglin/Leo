#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double Sin,Cos;
    scanf("%d",&n);
    Sin=sin(n);
    Cos=cos(n);
    printf("%.3lf %.3lf\n",Sin,Cos);
    return 0;
}
