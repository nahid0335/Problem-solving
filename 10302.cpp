#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,x;
    while(cin>>n)
    {
        x=(n*n)*(n+1)*(n+1)/4;
        cout<<x<<endl;
    }
    return 0;
}
