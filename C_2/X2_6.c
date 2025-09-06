#include <stdio.h>
int main(void)
{
    float x;
    x=0.5*10*3*3;
    printf("height = %.2f",x);   /*不能用1/2，两个整数数据计算除法结果一定是整数*/
    return 0;
}