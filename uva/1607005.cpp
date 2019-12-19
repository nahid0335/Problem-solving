#include<iostream>
using namespace std;

class node
{
public:
    int info;
    node *forw,*backw;
};
void creation(int);
void first_insert(node *);
void last_insert(node *ptr);
void m_after_insert(node *ptr,node *srt);
void m_before_insert(node *ptr,node *srt);

node *first=NULL ,*last=NULL;
//node *first2=NULL,*last2=NULL;
int main()
{
    int n,item;
    cout<<"Enter the number of element of 1st list:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        creation(item);
    }
    for(node *srt=first;srt!=last;srt=srt->forw)
    {
        cout<<srt->info<<" ";
    }
}
void first_insert(node *ptr)
{
    ptr->forw=first;
    first->backw=ptr;
    first=ptr;
}
void last_insert(node *ptr)
{
    last->forw=ptr;
    ptr->backw=last;
    last=ptr;
}
void m_after_insert(node *ptr,node *srt)
{
    node *temp;
    temp=srt->forw;
    ptr->forw=temp;
    ptr->backw=srt;
    srt->forw=ptr;
    temp->backw=ptr;
}
void m_before_insert(node *ptr,node *srt)
{
    node *temp;
    temp=srt->backw;
    ptr->backw=temp;
    ptr->forw=srt;
    temp->forw=ptr;
    srt->backw=ptr;
}
void creation(int data)
{
    node *ptr;
    ptr=new node();
    ptr->info=data;
    ptr->forw=NULL;
    ptr->backw=NULL;
    if(first==NULL)
    {
        first=ptr;
        last=ptr;
    }
    else
    {
        node *srt;
        for(srt=first;;srt=srt->forw)
        {
            if(srt->info>=ptr->info && srt->backw==NULL)
            {
                first_insert(ptr);
            }
            else if(srt->info<ptr->info && srt->forw==NULL)
            {
                last_insert(ptr);
            }
            else if(srt->info>=ptr->info && srt->backw!=NULL)
            {
                m_before_insert(ptr,srt);
            }
        }
    }
}
