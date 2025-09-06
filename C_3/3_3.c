#include<stdio.h>
int main(void)
{
    double distance,price=0;
    int time;
    scanf("%lf %d",&distance,&time);
    if (distance <=3)
    {
        price=price+10+time/5*2;
        printf("%.0lf",price);
    }
    else if (distance <=10)
    {
        price=price+10+(distance-3)*2+time/5*2;
        printf("%.0lf",price);
    }
    else
    {
        price=price+24+(distance-10)*3+time/5*2;
        printf("%.0lf",price);
    }
    return 0;
}