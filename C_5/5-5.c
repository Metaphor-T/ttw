#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}
int CountDigit( int number, int digit )
{
    int result=0,temp,num;
    if (number<0)
    {
        temp=-number;
    }
    else temp=number;
    if (temp==0 && digit == 0)
    {
        return 1;
    }
    while( temp>0 )
    {
        num=temp%10;
        if(num==digit)
        {
            result++;
        }
        temp=temp/10;
    }
    return result;
}