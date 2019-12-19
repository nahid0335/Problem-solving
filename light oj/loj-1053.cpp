#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    int a[3];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+3);
        printf("Case %d: ",i);
        if(a[2]*a[2]==a[1]*a[1]+a[0]*a[0])
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
