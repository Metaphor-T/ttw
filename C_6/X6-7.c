#include<stdio.h>
int main(void)
{
    int sum,num;
    char ch;
    scanf("%d",&sum);
    while ((ch=getchar())!='=')
    {
        scanf("%d",&num);
        if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            if (ch=='+')
            {
                sum=sum+num;
            }
            else if (ch=='-')
            {
                sum=sum-num;
            }
            else if (ch=='*')
            {
                sum=sum*num;
            }
            else
            {
                if (num==0)
                {
                    printf("ERROR");
                    return 0;
                }
                sum=sum/num;
            }
        }
        else
        {
            printf("ERROR");
            return 0;
        }
    }
    printf("%d",sum);
    return 0;
}