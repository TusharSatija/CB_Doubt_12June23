#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    node* root=new node(d);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}
void inorder(node* root)
{
    if(!root)     //base case
        return ;
    
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

void postorder(node * root)
{
    if(!root)
        return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

node* BuildTreeLevelwise()
{
    int d;
    cout<<"enter root data";
    cin>>d;
    if(d==-1)
        return NULL;
    node* root=new node(d);
    queue<node*> q1;
    q1.push(root);

    while(!q1.empty())
    {
        node* r1=q1.front();
        q1.pop();

        int s1,s2;
        cout<<"enter data for "<<r1->data<<" left and right";
        cin>>s1>>s2;

        if(s1!=-1)
        {

            r1->left=new node(s1);
            q1.push(r1->left);
        }
        if(s2!=-1)
        {
            r1->right=new node(s2);
            q1.push(r1->right);
        }
    }
    return root;
}

void Preoder(node *root)
{
    if(!root)
        return;
    cout<<root->data<<"  ";
    Preoder(root->left);
    Preoder(root->right);
}

int main()
{
    node * r1=NULL;
    // r1=buildTree();
    r1=BuildTreeLevelwise();
    inorder(r1);
    cout<<endl;
    postorder(r1);
    cout<<endl;
    Preoder(r1);

    return 0;
}