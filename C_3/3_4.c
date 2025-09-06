#include <stdio.h>
int main(void)
{
    int n,A,B,C,D,E;
    double grade;
    scanf("%d",&n);
    A=B=C=D=E=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&grade);
        if (grade>=90)
        {
            A++;
        }
        else if (grade>=80)
        {
            B++;
        }
        else if (grade>=70)
        {
            C++;
        }
        else if (grade>=60)
        {
            D++;
        }
        else
        {
            E++;
        }
    }
    printf("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}