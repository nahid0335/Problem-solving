#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,m,t,p,r,cas=0;
    while(cin>>n && n)
    {
        int a[n];
        cas++;
        cout<<"Case "<<cas<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        while(m--)
        {
            cin>>p;
            t=a[0]+a[1];
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    r=a[i]+a[j];
                    if (abs(t-p)>abs(r-p))
                    {
                        t=r;
                    }
                }
            }
            cout<<"Closest sum to "<<p<<" is "<<t<<"."<<endl;
        }

    }
    return 0;
}
