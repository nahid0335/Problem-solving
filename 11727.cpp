#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll a,i=0;
    cin>>a;
    while(i<a)
    {
        i++;
        vector<int>v;
        ll t;
        for(ll j=0;j<3;j++)
        {
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<i<<": "<<v[1]<<endl;
    }
    return 0;
}
