#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,len,i,j;
    char str[16];
    gets(str);
    len=strlen(str);
    if(len==1)
    {
        printf("YES");
        return 0;
    }
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("YES");
        return 0;
    }
    else
    {
        printf("NO");
        return 0;
    }
}
