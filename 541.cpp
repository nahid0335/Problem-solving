#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define du double
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define fi(j,k,n) for(j=k;j<n;j++)
#define fd(j,k,n) for(j=k;j<n;j--)
#define vc(v,a) vector<a>v
#define pb push_back
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)

int main()
{
    read;
    write;
    ll n;
    int x,i,j;
    while(cin>>n &&n)
    {
        ll c,a=0,b=0,p=0,q=0;
        int ar[n][n];
        fi(i,0,n)
        {
            c=0;
            fi(j,0,n)
            {
                cin>>ar[i][j];
                c+=ar[i][j];
            }
            if(c%2)
            {
                a=i;
                p++;
            }
        }
        fi(j,0,n)
        {
            c=0;
            fi(i,0,n)
            {
                c+=ar[i][j];
            }
            if(c%2)
            {
                b=j;
                q++;
            }
        }
        if(p==0 && q==0)
            cout<<"OK"<<endl;
        else if(p==1 && q==1)
            cout<<"Change bit ("<<a+1<<","<<b+1<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }
    return 0;
}
