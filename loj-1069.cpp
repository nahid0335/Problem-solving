#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,ans,lp,mp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&mp,&lp);
        if(mp<=lp)
            printf("Case %d: %d\n",i,(19+lp*4));
        else
            printf("Case %d: %d\n",i,(19+mp*4+(mp-lp)*4));
    }
    return 0;
}
