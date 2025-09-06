#include<stdio.h>
int main(void)
{
    int n,i;
    int j=0;
    scanf("%d",&n);
    if (n<=2000 || n>2100)
    {
        printf("Invalid year!");
    }
    else
    {
        for(i=2001;i<=n;i++)
        {
            if ((i%4==0 && i%100!=0) || i%400==0)
            {
                printf("%d\n",i);
                j=1;
            }
        }
        if (j==0)
        {
            printf("None");
        }
    }
    return 0;
}