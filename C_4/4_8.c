#include<stdio.h>
int main(void)
{
    int height,n;
    scanf("%d",&height);
    scanf("%d",&n);
    double a=0,temp;
    temp=height;
    for(int i=1;i<=n;i++)
    {
        if (i==1) a+=temp;
        else a+=temp*2;
        temp/=2;
    }
    if (n==0) printf("0.0 0.0");
    else printf("%.1lf %.1lf",a,temp);
    return 0;
}