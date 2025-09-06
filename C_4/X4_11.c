#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,k,limit,n,m,flag,count,sum;
    scanf("%d %d",&m,&n);
    count=0;
    sum=0;
    for (k=m;k<=n;k++)
    {
        if (k<=1)
        {
            flag=0;
        }
        else if (k==2)
        {
            flag=1;
        }
        else
        {
            flag=1;
            limit=sqrt(k)+1;
            for (i=2;i<=limit;i++)
            {
                if (k%i==0)
                {
                    flag=0;
                    break;
                }
            }
        }
        if (flag==1)
        {
            sum=sum+k;
            count++;
        }
    }
    printf("%d %d",count,sum);
    return 0;
}