#include <stdio.h>
int main(void)
{
    double x;
    int y;
    scanf("%lf",&x);
    if (x<0)
    {
        y=-1;
    }
    else if (x==0)
    {
        y=0;
    }
    else
    {
        y=1;
    }
    printf("sign(%.0lf) = %d",x,y);
    return 0;
}