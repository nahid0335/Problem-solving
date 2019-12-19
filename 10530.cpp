#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i;
    int ar[11];
    memset(ar,0,sizeof(ar));
    string s;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin.ignore();
        getline(cin,s);
        if(s[4]=='h')
        {
            for(i=n;i<11;i++)
            {
                ar[i]=1;
            }
        }
        else if(s[4]=='l')
        {
            for(i=1;i<=n;i++)
                ar[i]=1;
        }
        else
        {
            if(ar[n]==1)
            {
                cout<<"Stan is dishonest"<<endl;
                memset(ar,0,sizeof(ar));
            }
            else
            {
                cout<<"Stan may be honest"<<endl;
                memset(ar,0,sizeof(ar));
            }
        }
    }
    return 0;
}
