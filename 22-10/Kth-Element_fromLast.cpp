#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
    
	Node(int d)
	{
		data=d;
		next=NULL;
	}
};
void displayLL(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insertAtTail(Node* &head,int d)
{
	if(head==NULL)
	{
		head=new Node(d);
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new Node(d);
    return;
}
int main()
{
	Node* head=NULL;
	
    while(1)
    { 
		int d;
		cin>>d;
		if(d==-1)
        {
            break;
        }
        insertAtTail(head,d);
    
    }
    int k;
    cin>>k;
    Node*fast=head;
    Node*slow=head;
    while(--k)
    {
        fast=fast->next;
    }
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    cout<<slow->data;
    cout<<endl;

 
	return 0;
}