#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,i,j,sum=0;
    string s;
    while(cin>>s)
    {
        if(s[0]=='0')
        {
            break;
        }
        sum=0;
        n=s.size();
        for(i=0,j=n;i<n;i++,j--)
        {
            sum+=(s[i]-'0')*(pow(2,j)-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
