#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct edge
{
    int f,t;
    double d;
}E;
int getParent(int i,int *set)
{
    if(i==set[i])
        return i;
    else
        return (set[i]=getParent(set[i],set));
}
int isUnion(int a,int b,int* set)
{
    return getParent(a,set)==getParent(b,set);
}
void makeUnion(int a,int b,int* set)
{
    set[getParent(a,set)] = getParent(b,set);
}
double distance(int x1,int y1,int x2,int y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int cmp(const void* a,const void* b)
{
    if((*(E*)a).d<(*(E*)b).d)
        return -1;
    else
        return 1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int nodes[600][2];
    E edgeList[179700];
    int set[600],c,i,j,n,e,S,done;
    double res;
    scanf("%d",&c);
    while(c-->0)
    {
        e = 0;
        scanf("%d %d",&S,&n);
        for(i=0;i<n;i++)
            scanf("%d %d",nodes[i],nodes[i]+1);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            {
                edgeList[e].f=i;
                edgeList[e].t=j;
                edgeList[e].d=distance(nodes[i][0],nodes[i][1],nodes[j][0],nodes[j][1]);
                e++;
            }
        done = 0;
        for(i=0;i<n;i++)set[i]=i;
        qsort(edgeList,e,sizeof(E),&cmp);
        res = 0;
        for(i=0;i<e&&done<n-S;i++)
        {
            if(!isUnion(edgeList[i].f,edgeList[i].t,set))
            {
                makeUnion(edgeList[i].f,edgeList[i].t,set);
                if(edgeList[i].d>res)
                    res = edgeList[i].d;
                done++;
            }
        }
        printf("%.2lf\n",res);
    }
    return  0;
}
