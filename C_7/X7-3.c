#include<stdio.h>
int main(void)
{
    int n,i,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
}