#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

    class node
    {
    public:
        int data;
        node *fw,*bw;
    };
    node *first=NULL,*last=NULL;
void firstinsert(node *ptr,node *srt);
void midinsert(node *ptr,node *srt);
void afterinsert(node *ptr,node *srt);

node *nodecreate(int a)
{
    node *ptr;
    ptr=new node();
    ptr->data=a;
    ptr->bw=NULL;
    ptr->fw=NULL;
    return ptr;
}
void create(int a)
{
    node *ptr;
    ptr=nodecreate(a);
    if(first==NULL)
    {
        first=ptr;
        last=ptr;
    }
    else
    {
        node *srt;
        for(srt=first;;srt=srt->fw)
        {
            if(ptr->data<=srt->data)
            {
                if(srt==first)
                {
                    firstinsert(ptr,srt);
                }
                else
                {
                    midinsert(ptr,srt);
                }
                break;
            }
            else if(srt->bw==NULL)
            {
                afterinsert(ptr,srt);
                break;
            }
        }
    }
}
void firstinsert(node *ptr,node *srt)
{
    ptr->fw=first;
    srt->bw=ptr;
    first=ptr;
}
void midinsert(node *ptr,node *srt)
{
    ptr->fw=srt;
    ptr->bw=srt->bw;
    srt->bw->fw=ptr;
    srt->bw=ptr;
}
void afterinsert(node *ptr,node *srt)
{
    srt->fw=ptr;
    ptr->bw=srt;
    last=ptr;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        create(x);
    }
    node *srt;
    for(srt=first;srt!=NULL;srt=srt->fw)
        cout<<srt->data<<" ";
}
