#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char st[1000];
    while(gets(st)!=EOF)
    {
        len=strlen(st);
        st[len]='\0';
        printf("%s",st);
    }
    return 0;
}
