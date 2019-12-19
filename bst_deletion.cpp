#include<bits/stdc++.h>
using namespace std;

class bst
{
public:
    int data;
    bst *left,*right;
};
bst *root=NULL;

void creation(int s)
{
    bst *ptr;
    ptr=new bst();
    ptr->data=s;
    ptr->left=NULL;
    ptr->right=NULL;
    if(root==NULL)
    {
        root=ptr;
    }
    else
    {
        bst *srt;
        for(srt=root;;)
        {
            if(srt->data>ptr->data)
            {
                if(srt->left==NULL)
                {
                    srt->left=ptr;
                    break;
                }
                else
                    srt=srt->left;
            }
            else
            {
                if(srt->right==NULL)
                {
                    srt->right=ptr;
                    break;
                }
                else
                    srt=srt->right;
            }
        }
    }
}
bst *minleft(bst *srt)
{
    if(srt->left==NULL)
        return srt;
    minleft(srt->left);
}
void travers(bst *node)
{
    if(node==NULL)
        return;
    travers(node->left);
    cout<<node->data<<" ";
    travers(node->right);
}
void delet(int a)
{
    bst *srt,*tmp=root;
    for(srt=root;;)
    {
        if(srt->data==a)
        {
            if(srt->left==NULL && srt->right==NULL)
            {
                if(tmp->left==srt)
                    tmp->left=NULL;
                else
                    tmp->right=NULL;
            }
            else if(srt->left==NULL || srt->right==NULL)
            {
                if(srt->left==NULL)
                {
                    if(tmp->left==srt)
                    {
                        tmp->left=srt->right;
                    }
                    else
                    {
                        tmp->right=srt->right;
                    }
                }
                else
                {
                    if(tmp->left==srt)
                    {
                        tmp->left=srt->left;
                    }
                    else
                    {
                        tmp->right=srt->left;
                    }
                }
            }
            else
            {
                bst *ptr;
                ptr=minleft(srt->right);
                int b=ptr->data;
                delet(ptr->data);
                srt->data=b;
            }
            break;
        }
        else if(srt->data>a)
        {
            tmp=srt;
            if(srt->left==NULL)
            {
                cout<<"There is no data ."<<endl;
                break;
            }
            else
            {
                srt=srt->left;
            }
        }
        else
        {
            tmp=srt;
            if(srt->right==NULL)
            {
                cout<<"There is no data."<<endl;
                break;
            }
            else
                srt=srt->right;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of value :";
    cin>>n;
    cout<<"Enter the value :";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        creation(x);
    }
    cout<<"Enter the value to delete:";
    int a;
    cin>>a;
    delet(a);
    cout<<"The output:";
    travers(root);
}
