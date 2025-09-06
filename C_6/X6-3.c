#include<stdio.h>
int main(void)
{
    char ch;
    ch=getchar();
    while(ch!='\n')
    {
        if (ch>='a'&& ch<'z')
        {
            ch=ch-'a'+'A'+1;
        }
        else if (ch>='A'&& ch<'Z')
        {
            ch=ch-'A'+'a'+1;
        }
        else if (ch=='Z') ch='a';
        else if (ch=='z')ch='A';
        putchar(ch);
        ch=getchar();
    }
}