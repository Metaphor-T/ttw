#include<stdio.h>
int main(void)
{
    int n,temp,a,b,sum;
    scanf("%d",&n);
    int low=1;
    for (int i=1;i<n;i++)
    {
        low*=10;
    }
    int high=1;
    for (int i=1;i<=n;i++)
    {
        high*=10;
    }
    for (int i=low;i<high;i++)
    {
        sum=0;
        temp=i;
        while (temp>0)
       {
           b=1;
           a=temp%10;
           temp=temp/10;
           for (int j=1;j<=n;j++)
           {
               b*=a;
           }
           sum+=b;
       }
        if (i==sum) printf("%d\n",i);
    }
    return 0;
}