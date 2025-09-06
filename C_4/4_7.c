#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,num;
    scanf("%d",&a);
    scanf("%d",&b);
    int min=a;
    if (min>b) min=b;
    for (int i=min;i>0;i--)
    {
        if (a%i==0&&b%i==0)
        {
            printf("%d ",i);
            num=i;
            break;
        }
    }
    printf("%d",a*b/num);
    return 0;
}