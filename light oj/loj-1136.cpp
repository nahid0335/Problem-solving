#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==1||a==0)
            x=0;
        else
            x=a-2-(a-2)/3;
        if(b==1||b==0)
            y=0;
        else
            y=b-1-(b-1)/3;
        printf("Case %d: %d\n",i,y-x);
    }
    return 0;
}
