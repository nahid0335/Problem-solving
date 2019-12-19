#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    while(cin>>t && t)
    {
        while(t--)
        {
            ll m[5];
            ll p=0,b=0;
            for(ll i=0;i<5;i++)
            {
                cin>>m[i];
                if(m[i]<=127)
                {
                    p++;
                    b=i;
                }
            }
            if(p==1)
                cout<<(char)(65+b)<<endl;
            else
                cout<<"*"<<endl;
        }
    }
}
