#include<stdio.h>
int main(void)
{
    double n,a,b,temp;  //n过大时,整数会溢出（int）,所以用double
    double sum,item;
    scanf("%lf",&n);
    a=1;
    b=1;
    sum=0;
    for(int i=1;i<=n;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        item=b/a;
        sum+=item;
    }
    printf("%.2lf\n",sum);
    return 0;
}