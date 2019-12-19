#include<cstdio>
#include<iomanip>
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
string a="ZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    ll n,f=0;
    cin>>n;
    for(ll j=0;j<n;j++)
    {
        string s,s1="",s2="",s3="",s4="";
        cin>>s;
        ll len=s.size();
        ll i=0;
        if(s[i]=='R' && s[i+1]>='0' && s[i+1]<='9')
        {
            i++;
            while(1)
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    s1+=s[i];
                    i++;
                }
                else
                {
                    break;
                }
            }
            if(s[i]=='C'){
                f=1;
            while(f)
            {
                i++;
                if(s[i]>='0'  && s[i]<='9' && i<len)
                {
                    s2+=s[i];
                }
                else{
                    break;
                }
            }
            stringstream ss(s2);
            ll v ;
            ss>>v;
            while(v)
            {
                ll m=v%26;
                s3+=a[m];
                v=(v+25)/26;
                v--;
            }
            reverse(s3.begin(),s3.end());
            s3+=s1;
            cout<<s3<<endl;
        }
        s1.clear();
        s2.clear();
        s3.clear();
        s4.clear();
        }
        if(!f)
        {
            i=0;
            while(1)
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    break;
                }
                else
                {
                    s1+=s[i];
                    i++;
                }
            }
            //cout<<s1;
            while(i<len)
            {
                s2+=s[i];
                i++;
            }
            s3+='R'+s2+'C';
            ll in=s1.size();
            i=0;
            ll sum=0;
            while(i<in)
            {
                int m=s1[i]-'A'+1;
                sum+=m;
                sum*=26;
                i++;
            }
            sum/=26;
            stringstream ss;
            ss<<sum;
            s4=ss.str();
            s3+=s4;
            cout<<s3<<endl;
        }
    }
}
