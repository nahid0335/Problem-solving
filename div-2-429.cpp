#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,len,i,x=0;
    string s;
    int a[250];
    memset(a,0,sizeof(a));
    cin>>n>>k;
    cin>>s;
    for(i=0;i<n;i++)
    {
        len=s[i];
        a[len]++;
        if(a[len]>k)
            x=1;
    }
    if(x==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
