#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,temp,count=1;
    while (b<n)
    {
        temp=b;
        b=a+b;
        a=temp;
        count++;
    }
    printf("%d",count);
    return 0;
}