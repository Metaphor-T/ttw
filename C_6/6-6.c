#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse( int number )
{
    int i,flag=0,reverse=0;
    if (number<0)
    {
        flag=1;
        number=-number;
    }
    while (number>0)
    {
        i=number%10;
        reverse=reverse*10+i;
        number=number/10;
    }
    if (flag==1) reverse=-reverse;
    return reverse;
}