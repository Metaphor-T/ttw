#include<stdio.h>
#include<math.h>
int main(void)
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b,c;
    double length,s,mid;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    if ((x1-x2)*(y1-y3)==(x1-x3)*(y1-y2))
    {
        printf("Impossible\n");
    }
    else
    {
        length=a+b+c;
        mid=length*0.5;
        s=sqrt(mid*(mid-a)*(mid-b)*(mid-c));
        printf("L = %.2lf, A = %.2lf",length,s);
    }
    return 0;
}