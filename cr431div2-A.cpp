#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        cout<<"No";
        return 0;
    }
    if(a[0]%2==0 || a[n-1]%2==0)
    {
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
    return 0;
}
