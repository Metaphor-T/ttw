#include<stdio.h>
#include<math.h>
int main(void)
{
    int flag,i;
    double sum,item,eps;
    scanf("%lf",&eps);
    flag=1;
    i=1;
    sum=0.0;
    item=1.0;
    while (fabs(item)>eps)
    {
        sum=sum+item;
        i=i+3;
        flag=-flag;
        item=flag*1.0/i;
    }
    sum+=item;
    printf("sum = %.6lf\n",sum);
    return 0;
}