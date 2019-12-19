#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,up;
    while(cin>>n>>m)
    {
        up=n*(m-1)+n-1;
        cout<<up<<endl;
    }
    return 0;
}
