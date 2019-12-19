#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    while(cin>>t && t)
    {
        ll i,n=0;
        int a[2000];
        for(i=0;i<t;i++)
            cin>>a[i];
        sort(a,a+t);
        for(i=1;i<t;i++)
            if(a[i]-a[i-1]>200)
            {
                n=1;
                break;
            }
        if(1422-a[t-1]>100)
            n=1;
        if(n==1)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<"POSSIBLE"<<endl;
    }
    return 0;
}
