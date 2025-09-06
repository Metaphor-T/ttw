#include<stdio.h>
int main(void)
{
    int n,a,b,c,count=0;
    scanf("%d",&n);
    for (a=n/5;a>0;a--)
    {
        for (b=(n-a*5)/2;b>0;b--)
        {
            for (c=(n-a*5+b*2);c>0;c--)
            {
                if (n==a*5+b*2+c)
                {
                    count++;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a,b,c,a+b+c);
                }
            }
        }
    }
    printf("count = %d\n",count);
    return 0;
}