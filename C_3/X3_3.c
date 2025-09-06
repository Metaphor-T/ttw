#include<stdio.h>
int main(void)
{
    int count,n,i;
    double score,total;
    scanf("%d",&n);
    count=0;
    total=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&score);
        total=total+score;
        if (score>=60)
        {
            count=count+1;
        }
    }
    if (n>0)
    {
        printf("average = %.1lf\n",total/n);
        printf("count = %d",count);
    }
    else
    {
        printf("average = %.1lf\n",total);
        printf("count = %d",count);
    }
    return 0;
}