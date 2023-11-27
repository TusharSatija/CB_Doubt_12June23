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

void verticalOrder(node *root,map<int,vector<int>> &mp,int lev)
{
	if(!root)
		return;

	mp[lev].push_back(root->data);
	verticalOrder(root->left,mp,lev-1);
	verticalOrder(root->right,mp,lev+1);



}

int main()
{
	int level;
	cin>>level;
	node * r=NULL;
	r=buildTreeLevel();

	map<int,vector<int>> mp;
	verticalOrder(r,mp,0);

	for(auto it :mp)
	{
		for(auto x: it.second)
		{
			cout<<x<<" ";
		}
	}
}