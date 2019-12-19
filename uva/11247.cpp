#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll m,x;
    while(cin>>m>>x)
    {
        if(m==0 && x==0)
            break;
        if(x==100)
            cout<<"Not found"<<endl;
        else
        {
            ll v=(m-1)*100/(100-x);
            if((m-1)*100%(100-x)==0)
                v--;
            if(v<m)
                cout<<"Not found"<<endl;
            else
                cout<<v<<endl;
        }
    }
    return 0;
}
