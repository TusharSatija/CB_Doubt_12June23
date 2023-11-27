#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node  *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

node * buildTreeLevel()
{
    int d; 
    cin>>d;
    if(d==-1)
        return NULL;

    node* root=new node(d);
    queue<node *> q1;
    q1.push(root);

    while(!q1.empty())
    {
        node* r1=q1.front();
        q1.pop();
        int  lef,rig;
        cin>>lef>>rig;

        if(lef!=-1)
        {
            r1->left=new node(lef);
            q1.push(r1->left);
        }
        if(rig!=-1)
        {
            r1->right=new node(rig);
            q1.push(r1->right);
        }
    }
    return root;
}
void PrintLevelwisenew(node * root)
{
    queue<node *>q3;
    q3.push(root);
    q3.push(NULL);

    while(!q3.empty())
    {
        node* r=q3.front();
        q3.pop();

        if(r==NULL)
        {
            cout<<endl;
            if(!q3.empty())
            {
                q3.push(NULL);
            }
        }
        else{
            cout<<r->data<<" "; 
        if(r->left!=NULL)
        {
            q3.push(r->left); 
        }
        if(r->right!=NULL)
        {
            q3.push(r->right); 
        }

        }

    }
}

void PrintLevelwise(node * root)
{
    queue<node*> q2;
    q2.push(root);

    while(!q2.empty())
    {
        node * r1=q2.front();
        q2.pop();
        cout<<r1->data<<"  ";

        if(r1->left!=NULL)
        {
            q2.push(r1->left); 
        }
        if(r1->right!=NULL)
        {
            q2.push(r1->right); 
        }
    }
}

void preorder(node* root)
{
    if(!root)
    return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node* r2=NULL;
    r2=buildTreeLevel();
    preorder(r2);

    cout<<endl;
    PrintLevelwise(r2);
    cout<<endl;
    PrintLevelwisenew(r2);

}