#include<stdio.h>
int main(void)
{
    int count=0,n,flag,mynumber,yournumber;
    scanf("%d",&mynumber);
    scanf("%d",&n);
    flag=0;
    while (count<n)
    {
        scanf("%d",&yournumber);
        count++;
        if(yournumber==mynumber)
        {
            flag=1;
            if (count==1)
            {
                printf("Bingo!\n");
            }
            else if (count<=3)
            {
                printf("Lucky You!\n");
            }
            else
            {
                printf("Good Guess!\n");
            }
            break;
        }
        else if (yournumber<0)
        {
            break;
        }
        else if (yournumber<mynumber)
        {
            printf("Too small\n");
        }
        else printf("Too big\n");
    }
    if (flag==0)
    {
        printf("Game Over\n");
    }
    return 0;
}