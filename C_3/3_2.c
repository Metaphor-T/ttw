#include<stdio.h>
int main(void)
{
    int speed_1,speed_2;
    double rate;
    scanf("%d %d",&speed_1,&speed_2);
    rate=1.0*(speed_1-speed_2)/speed_2;
    if (rate<0.1)
    {
        printf("OK");
    }
    else if (rate>=0.1 && rate<0.5)
    {
        printf("Exceed %.0lf%%. Ticket 200",rate*100);
    }
    else
    {
        printf("Exceed %.0lf%%. License Revoked",rate*100);
    }
    return 0;
}