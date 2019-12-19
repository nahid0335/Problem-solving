#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,i=0;
    cin>>t;
    while(i<t)
    {
        i++;
        vector<int>v;
        ll n,j,x;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<i<<": "<<v[(n/2)]<<endl;
    }
    return 0;
}
