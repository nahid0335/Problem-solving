#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<bitset>
#include<utility>
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

int main()
{
    string s;
    ll c=0;
    while(getline(cin,s,'\n') && s!="Z")
    {
        ll f=0;
        cout<<"Puzzle #"<<++c<<":"<<endl;
        char v[6][6];
        ll x=0,y=0;
        for(ll i=0; i<5; i++)
        {
            v[0][i]=s[i];
            if(s[i]==' ')
            {
                x=0;
                y=i;
            }
        }
        for(ll i=1; i<5; i++)
        {
           // getline(cin,s,'\n');
            for(ll j=0; j<5; j++)
            {
                char ch;
                cin>>ch;
                v[i][j]=ch;
                if(ch==' ')
                {
                    x=i;
                    y=j;
                }
                cout<<x<<" "<<y<<endl;
            }
        }
       /* for(ll i=0;i<5;i++)
            {
                for(ll j=0;j<5;j++)
                    cout<<v[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl;*/

        while(getline(cin,s))
        {
            ll len=s.size();
            for(ll i=0;i<len;i++)
            {
                if(s[i]=='0')
                    break;
                else if(s[i]=='A' && x>0)
                {
                    swap(v[x][y],v[x-1][y]);
                    x--;
                }
                else if(s[i]=='B' && x<4)
                {
                    swap(v[x][y],v[x+1][y]);
                    x++;
                }
                else if(s[i]=='R' && y<4)
                {
                    swap(v[x][y],v[x][y+1]);
                    y++;
                }
                else if(s[i]=='L' && y>0)
                {
                    swap(v[x][y],v[x][y-1]);
                    y--;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(s[len-1]=='0')
                break;
        }
        if(f)
            cout<<"This puzzle has no final configuration."<<endl;
        else
        {
            for(ll i=0;i<5;i++)
            {
                for(ll j=0;j<5;j++)
                    cout<<v[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl;
        }
    }
}
