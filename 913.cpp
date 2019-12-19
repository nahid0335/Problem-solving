#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,i,j,k,sum;
    while(cin>>n)
    {
        sum=(n*(n+2)/2)*3-6;
        cout<<sum<<endl;
    }
    return 0;
}
