#include <stdio.h>
#include <math.h>
double funcos( double e, double x );
int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x )
{
    double item,flag,sum,product=1;
    sum=0.0;
    item=1.0;
    flag=1;
    int i=0;
    while (fabs(item)>=e)
    {
        sum+=item;
        flag=-flag;
        i=i+2;
        product=product*i*(i-1);
        item=pow(x,i)*flag/product;
    }
    sum+=item;
    return sum;
}