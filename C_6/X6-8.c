#include<stdio.h>
int main(void)
{
    char ch,prev=' ';
    while((ch=getchar())!='\n')
    {
        if (ch>='a' && ch<='z' && prev==' ') ch=ch-'a'+'A';
        putchar(ch);
        prev=ch;
    }
    return 0;
}