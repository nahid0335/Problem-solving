#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n;
    while(cin>>n && n>=0)
    {
        if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        vector<ll int>v;
        vector<ll int>::iterator it;
        while(n!=0)
        {
            ll int x=n%3;
            v.push_back(x);
            n/=3;
        }
        ll int len=v.size();
        for(ll int i=len-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;
    }
    return 0;
}
