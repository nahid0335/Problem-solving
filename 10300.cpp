#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n;
    long long int s,a,e,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        while(n--)
        {
            cin>>s>>a>>e;
            sum+=s*e;
        }
        cout<<sum<<endl;
    }
    return 0;
}
