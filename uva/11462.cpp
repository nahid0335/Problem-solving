#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n;
    while(cin>>n && n)
    {
        vector<int>v;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll len=v.size();
        for(ll i=0;i<len;i++)
        {
            if(i==len-1)
                cout<<v[i]<<endl;
            else
                cout<<v[i]<<" ";
        }
    }
    return 0;
}
