#include<bits/stdc++.h>
using namespace std;
struct edge
{
    ll nx,nc;
    bool operator<(const edge& p)const
    {
        return nc<p.nc;
    }
}tmp;
int main()
{
     priority_queue<edge,vector<edge> >q;
}
