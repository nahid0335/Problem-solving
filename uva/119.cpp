#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t,p,a,b,i,j,k=1;
    string s[100],x,y;
    map<string,int>m;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            m[s[i]]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            cin>>t>>p;
            if(p!=0)
            {
                a=t/p;
                b=a*p;
            for(j=0;j<p;j++)
            {
                cin>>y;
                m[y]+=a;
            }
            m[x]-=b;
        }
        }
        if(k!=1)
        {
            cout<<endl;
        }
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<" "<<m[s[i]]<<endl;
        }
        k++;
    }
    return 0;
}
