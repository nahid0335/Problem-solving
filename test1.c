#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void clrscr()
{
    system("@cls||clear");
}
int main()
{
    int i;
    for(i=0;i<80;i++)
    {
        printf("*");
    }
    getchar();
    clrscr();
      for(i=0;i<80;i++)
    {
        printf("_");
    }
    return 0;
}
