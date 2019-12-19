#include<iostream>
#include<cstdio>
#include<cmath>
#include<stdbool.h>
#include<stdlib.h>
#include<limits.h>
#include<cctype>
#include<sstream>
#include<fstream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<list>
#include<numeric>
#include<map>
#include<set>
#include<iterator>
#include<bitset>
#include<cassert>
#include<utility>
#include<complex>
#include<iomanip>
#include<functional>

using namespace std;

#define PI acos(-1)

typedef long long int LL;

//int a[100];

int main(void)
{
	int t,n,cs=0,i;
	string a;
	cin>>n;
	cin>>a;
	for(i=1;i<n;i++) {
		if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y') && (a[i-1]=='a' || a[i-1]=='e' || a[i-1]=='i' || a[i-1]=='o' || a[i-1]=='u' || a[i-1]=='y')) {
			a.erase(a.begin()+i);
			i--;
			n--;
		}
	}
	cout<<a<<endl;

	return 0;
}
