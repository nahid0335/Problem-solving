#include<bits/stdc++.h>
using namespace std;
bool cmp(int x)
{
    int p=x;
    int a=0;
    while(x)
    {
        a=a*10+x%10;
        x/=10;
    }
    return a==p;
}
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(cmp(n))
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
}
