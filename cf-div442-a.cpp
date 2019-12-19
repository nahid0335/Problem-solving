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
ll c=0;
int main()
{
	string s,s1,s2,s3,s4,s5;
	getline(cin,s);
	s1="Danil";
	s2="Olya";
	s3="Slava";
	s4="Ann";
	s5="Nikita";
	if(s.find(s1)!=string::npos)
    {

    for (ll i = 0; i < s.size();)
    {
        ll j = 0;
        ll con = 0;
        while ((s[i] == s1[j])&& s[i]!='\0')
        {
            con++;
            i++;
            j++;
        }
        if (con == s1.size())
        {
            c++;
            con = 0;
        }
        else
            i++;
    }
    }
    if(s.find(s2)!=string::npos)
    {
        for (ll i = 0; i < s.size();)
    {
        ll j = 0;
        ll con = 0;
        while ((s[i] == s2[j])&& s[i]!='\0')
        {
            con++;
            i++;
            j++;
        }
        if (con == s2.size())
        {
            c++;
            con = 0;
        }
        else
            i++;
    }
    }
    if(s.find(s3)!=string::npos)
    {
        for (ll i = 0; i < s.size();)
    {
        ll j = 0;
        ll con = 0;
        while ((s[i] == s3[j])&& s[i]!='\0')
        {
            con++;
            i++;
            j++;
        }
        if (con == s3.size())
        {
            c++;
            con = 0;
        }
        else
            i++;
    }
    }
    if(s.find(s4)!=string::npos)
    {
        for (ll i = 0; i < s.size();)
    {
        ll j = 0;
        ll con = 0;
        while ((s[i] == s4[j]) && s[i]!='\0')
        {
            con++;
            i++;
            j++;
        }
        if (con == s4.size())
        {
            c++;
            con = 0;
        }
        else
            i++;
    }
    }
    if(s.find(s5)!=string::npos)
    {
        for (ll i = 0; i < s.size();)
    {
        ll j = 0;
        ll con = 0;
        while ((s[i] == s5[j])&& s[i]!='\0')
        {
            con++;
            i++;
            j++;
        }
        if (con == s5.size())
        {
            c++;
            con = 0;
        }
        else
            i++;
    }
    }
    if(c==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
