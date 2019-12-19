#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
//#include<unordered_set>
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
//#include<unordered_map>
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

int main()
{
    read;
    write;
    ll w,h,n;
    bool bit[501][501];
    while(cin>>w>>h>>n,w)
    {
        mset(bit);
        ll x1,x2,y1,y2,p=0,a1,a2,b1,b2,i,j;
        while(n--)
        {
            cin>>x1>>y1>>x2>>y2;
            a1=min(x1,x2);
            a2=max(x1,x2);
            b1=min(y1,y2);
            b2=max(y1,y2);
            fi(i,a1,a2+1)
                fi(j,b1,b2+1)
                    bit[i][j]=1;
        }
        fi(i,1,w+1)
            fi(j,1,h+1)
                if(!bit[i][j])
                    p++;
        if(p==0)
            cout<<"There is no empty spots."<<endl;
        else if(p==1)
            cout<<"There is one empty spot."<<endl;
        else
           cout<<"There are "<<p<<" empty spots."<<endl;
    }
    return 0;
}
