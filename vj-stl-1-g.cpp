#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<functional>
using namespace std;

#define ll long long int
#define du double
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define fi(j,k,n) for(j=k;j<n;j++)
#define fd(j,k,n) for(j=k;j<n;j--)
#define vc(a) vector<a>
#define pb push_back
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)

int tminx[1000001];
queue<int>tmps[1001];
int main()
{
    read;
    write;
    ll t,k=1;
    while(cin>>t,t)
    {
        ll n,i,j;
        for(i=1;i<=t;i++)
        {
            while(!tmps[i].empty())
                tmps[i].pop();
            cin>>n;
            while(n--)
            {
                ll m;
                cin>>m;
                tminx[m]=i;
            }
        }
        string s;
        cout<<"Scenario #"<<k<<endl;
        k++;
        queue<int>cmb;
        while(cin>>s,s!="STOP")
        {
            if(s=="ENQUEUE")
            {
                ll num;
                cin>>num;
                int tm;
                tm=tminx[num];
                if(tmps[tm].empty())
                    cmb.push(tm);
                tmps[tm].push(num);
            }
            else
            {
                int tm=cmb.front();
                cout<<tmps[tm].front()<<endl;
                tmps[tm].pop();
                if(tmps[tm].empty())
                    cmb.pop();
            }
        }
        cout<<endl;
    }
}
