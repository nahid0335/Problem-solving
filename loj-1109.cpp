#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)
        return 1;
    if(a.first>b.first)
        return 0;
    if(a.second>b.second)
        return 1;
    return 0;
}
int main()
{
    int n,t;
    vector<pair<int,int> >a(1001);
    for(int i=1;i<=1000;i++)
    {
        a[i].first=0;
        a[i].second=i;
    }
    for(int i=1;i<=1000;i++)
    {
        for(int j=i;j<=1000;j+=i)
            a[j].first++;
    }
    sort(a.begin(),a.end(),cmp);
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",i,a[n].second);
    }
    return 0;
}
