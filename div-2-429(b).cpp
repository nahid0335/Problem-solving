#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<long long int,long long int>m;
    multimap<long long int, long long int>:: iterator it;
    long long int n,i,j,p;
    cin>>n;
    long long int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    p=sizeof(a)/sizeof(a[0]);
    sort(a,a+p);
    sort(b,b+p);
    for(i=0,j=n-1;i<n;i++,j--)
    {
        m.insert(pair<long long int, long long int>(b[i],a[j]));
    }
    for(i=0;i<n;i++)
    {
        it=m.find(c[i]);
        cout<<(*it).second<<" ";
        m.erase(it);
    }
    return 0;
}
