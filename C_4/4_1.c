#include<stdio.h>
int main(void)
{
    int n,sum=0;
    while (1)
    {
        scanf("%d",&n);
        if (n<=0) break;
        if (n%2==1) sum=sum+n;
    }
    printf("%d",sum);
    return 0;
}