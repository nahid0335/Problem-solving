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

string multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
        return "0";
    vector<int> result(n1 + n2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=n2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
        s +='0'+(result[i--]);

    return s;
}
string sx(int x)
{
    string s="";
    while(x)
    {
        int n=x%10;
        s+=n+'0';
        x/=10;
    }
    reverse(s.begin(),s.end());
    //cout<<s<<endl;
    return s;
}
int main()
{
    read;
    write;
    int t;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
        {
            printf("%d!\n",t);
            printf("1\n");
        }
        else
        {
            string s,s2,s1="";
            s=sx(t);
            printf("%d!\n",t);
            for(int i=t-1; i>1; i--)
            {
                s2=sx(i);
                s=multiply(s,s2);
                s2.clear();
            }
            //s=multiply(s,"105");
            cout<<s<<endl;
        }
    }
}
