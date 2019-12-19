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
        ll a;
        vector<long long int>v;
        for(ll j=0;j<3;j++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[2]>=v[1]+v[0])
            cout<<"Case "<<i<<": Invalid"<<endl;
        else
        {
            if(v[0]==v[1]&&v[1]==v[2])
            {
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }
            else if(v[0]==v[1]||v[0]==v[2]||v[1]==v[2])
            {
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }
            else
                cout<<"Case "<<i<<": Scalene"<<endl;
        }
    }
    return 0;
}
