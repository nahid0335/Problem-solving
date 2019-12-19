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
#define N 1000001


int mu[1000005], M[1000005] = {};
int p[1005], pt = 0;
void sieve() {
    int i, j, mark[1005] = {};
    for(i = 2; i <= 1000; i++) {
        if(mark[i] == 0) {
            p[pt++] = i;
            for(j = i+i; j <= 1000; j += i)
                mark[j] = 1;
        }
    }
}
int main()
{
    read;
    write;
    sieve();
    mu[1] = 1, M[1] = 1;
    int n, i, j;
    for(i = 2; i <= 1000000; i++) {
        n = i;
        int cnt = 0;
        for(j = 0; j < pt && p[j]*p[j] <= n; j++) {
            if(n%p[j] == 0) {
                cnt++;
                if(n/p[j]%p[j] == 0) {
                    cnt = -100;
                    break;
                }
                n /= p[j];
            }
        }
        if(n != 1)  cnt++;
        if(cnt < 0) mu[i] = 0;
        else if(cnt&1)  mu[i] = -1;
        else    mu[i] = 1;
        M[i] = M[i-1] + mu[i];
    }
    while(scanf("%d", &n) == 1 && n)
        printf("%8d%8d%8d\n", n, mu[n], M[n]);
    return 0;
}

