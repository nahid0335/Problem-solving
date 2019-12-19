#include<bits/stdc++.h>
using namespace std;

int a[1000];
int lower[1000],upper[1000],top1=0,top2=0,top,loc;
void lpush(int n)
{
    top1++;
    lower[top1]=n;
}
void upush(int n)
{
    top2++;
    upper[top2]=n;
}
void lpop()
{
    top1--;
}
void upop()
{
    top2--;
}
int ltop()
{
    return lower[top1];
}
int utop()
{
    return upper[top2];
}

void quick(int n,int beg ,int End)
{
    if(beg>=End)
        return;
    int left=beg,right=End;
    while(left!=right)
    {
        if(left<right)
        {
            if(a[left]>a[right])
            {
                int tmp=a[left];
                a[left]=a[right];
                a[right]=tmp;
                tmp=left;
                left=right;
                right=tmp;
                right++;
            }
            else
                right--;
        }
        else if(left>right)
        {
            if(a[left]<a[right])
            {
                int tmp=a[left];
                a[left]=a[right];
                a[right]=tmp;
                tmp=left;
                left=right;
                right=tmp;
                right--;
            }
            else
                right++;
        }
    }
    loc=left;
}
void quicksort(int n)
{
    top=0;
    if(n>1)
    {
        lpush(1);
        upush(n);
        while(top1>0)
        {
            int beg=ltop();
            int End=utop();
            lpop();
            upop();
            quick(n,beg,End);
            if(beg<loc-1)
            {
                lpush(beg);
                upush(loc-1);
            }
            if(loc+1<End)
            {
                lpush(loc+1);
                upush(End);
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    quicksort(n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
