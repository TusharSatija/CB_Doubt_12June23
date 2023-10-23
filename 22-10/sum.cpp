#include<iostream>
using namespace std;

class node {
	public:
	int data;
	node *next;

	node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void insertAtTail(node *&head,int d)
{
	node * temp=head;
	if(head==NULL)
	{
		head=new node(d);
		return ;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new node(d);
}
node *reverse(node *head)
{
	node *p=NULL;
	node* c=head;
	while(c!=NULL)
	{
		node *n=c->next;
		c->next=p;
		p=c;
		c=n;
	}
	return head=p;
}

node* solve(node *l1,node*l2)
{
	node *p=l1;
	node*q=l2;
	node *res=new node(-1);
	node *ans=res;
	int carry=0;
	while(p!=NULL  or q!=NULL)
	{
		int x=(p!=NULL)?p->data:0;
		int y=(q!=NULL)?q->data:0;
		int number = x + y + carry;
		carry=number/10;
		ans->next=new node(number%10);
		ans=ans->next;

		if(p!=NULL)  p=p->next;
		if(q!=NULL)  q=q->next;
	}
	if(carry)
	{
		ans->next=new node(carry);
	}
	return res->next;
}

node * sum(node *head,node *head1)
{

	node *l1 = reverse(head);
	node *l2 = reverse(head1);

	return solve(l1,l2);

}


void printnode(node* head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main () {
	node *head=NULL;
	node* head1=NULL;
	int n,m;
	cin>>n>>m;
	while(n--)
	{
		int d;
		cin>>d;
		insertAtTail(head,d);
	}
	while(m--)
	{
		int d;
		cin>>d;
		insertAtTail(head1,d);
	}
 

	 node *r = sum(head,head1);
	
	printnode(reverse(r)); 
	return 0;
}