#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,res=0;
        scanf("%lld",&n);
        ll r=sqrt(n);
        r++;
        for(ll i=1;i<r;i++)
            res+=(n/i);
        r--;
        res=2*res-(r*r);
        printf("%lld\n",res);
    }
    return 0;
}
