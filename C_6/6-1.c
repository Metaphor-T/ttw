#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void StringCount( char s[] )
{

    int blank,letter,digit,other;
    blank=0;
    letter=0;
    digit=0;
    other=0;
    for ( int i = 0;i<=MAXS; i++ )
    {
        if (s[i]=='\0') break;
        if (s[i]==' ' || s[i]=='\n') blank++;
        else if (s[i]>='A' && s[i]<='Z') letter++;
        else if (s[i]>='a' && s[i]<='z') letter++;
        else if (s[i]>='0' && s[i]<='9') digit++;
        else other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}