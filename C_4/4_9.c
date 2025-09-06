#include<stdio.h>
int main(void)
{
    int n,num;
    scanf("%d",&n);
    num=n/2+1;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++) printf("  ");
        for(int j=1;j<=2*i-1;j++) printf("* ");
        printf("\n");
    }
    for(int i=1;i<=num-1;i++)
    {
        for(int j=1;j<=i;j++) printf("  ");
        for(int j=1;j<=2*(num-i)-1;j++) printf("* ");
        printf("\n");
    }
    return 0;
}