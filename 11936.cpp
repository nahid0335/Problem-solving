#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n;
    cin>>n;
    while(n--)
    {
        vector<int>v;
        ll i,a;
        for(i=0;i<3;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[2]>=v[1]+v[0])
            cout<<"Wrong!!"<<endl;
        else
            cout<<"OK"<<endl;
    }
    return 0;
}
