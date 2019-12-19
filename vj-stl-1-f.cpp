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

int main()
{
    map<string,string>m;
    map<string,string>::iterator it;
    string s,s1,s2,s3;
    cin>>s;
    while(1)
    {
        cin>>s1;
        if(!s1.compare("END"))
            break;
        cin>>s2;
        m[s2]=s1;
    }
    cin>>s;
    getchar();
    char ln[3002];
    while(1)
    {
        gets(ln);
        if(!strcmp(ln,"END"))
            break;
        ll len=strlen(ln),i;
        string s5;
        fi(i,0,len)
        {
            if(isalpha(ln[i]))
            {
                s5+=ln[i];
            }
            else
            {
                if(m.count(s5))
                {
                    it=m.find(s5);
                    s5=it->second;
                    cout<<s5;
                }
                else
                    cout<<s5;
                cout<<ln[i];
                s5.clear();
            }
        }
        cout<<endl;
    }
    return 0;
}
