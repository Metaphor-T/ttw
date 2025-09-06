#include<stdio.h>
int main(void)
{
    int sum;
    int a,b,c,d;
    double average;
    sum=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum=a+b+c+d;
    average=sum/4.0;
    printf("Sum = %d; Average = %.1f",sum,average);
    return 0;
}