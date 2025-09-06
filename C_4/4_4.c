#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    double a,n,sum=0;
    scanf("%lf",&a);
    scanf("%lf",&n);
    for(int i=0;i<n;i++)
    {
        sum+=a*fact(i);
    }
    printf("s = %.0lf\n",sum);
}
double fact(int n)
{
    double sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum=sum+pow(10,i);
    }
    return sum;
}