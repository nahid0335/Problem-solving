#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    while(cin>>t && t)
    {
        ll i=0,c=0,n;
        ll a[51];
        while(i<t)
        {
            cin>>a[i];
            i++;
        }
        for(int j=0;j<t-1;j++)
        {
            for(int k=j+1;k<t;k++)
            {
                if(__gcd(a[j],a[k])==1)
                    c++;
            }
        }
        n=t*(t-1)/2*6;
        if(!c)
            cout<<"No estimate for this data set."<<endl;
        else
            cout<<fixed<<setprecision(6)<<sqrt((double)n/(double)c)<<endl;
    }
    return 0;
}
