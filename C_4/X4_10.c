#include<stdio.h>
int main(void)
{
    int n,min,a;
    scanf("%d",&n);
    scanf("%d",&min);
    for (int i=1;i<n;i++)
    {
        scanf("%d",&a);
        if (a<min) min=a;
    }
    printf("min = %d\n",min);
    return 0;
}