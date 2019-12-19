#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,mx=0,mn=1000000000000,p=0;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if(mn>x[i]||mn>y[i])
        {
            mn=min(x[i],y[i]);
        }
        if(mx<x[i]||mx<y[i])
        {
            mx=max(x[i],y[i]);
        }
    }
    for(i=mn;i<=mx;i++)
    {
        for(p=0;p<n;p++)
        {
            if(i>=x[p]&&i<=y[p])
            {
                j++;
            }
        }
        if(j>2)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            j=0;
        }
    }
    cout<<"YES";
    return 0;
}
