#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

int lengthLL(Node *head)
{
    int len=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}

Node* reverseKtn(Node*  &head,int len,int k)
{
    if(len<k)
    {
        return head;
    }
    int count=0;
    Node* prev=NULL;
    Node* nex=NULL;
    Node* curr=head;
    while(curr!=NULL and count<k)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        count++;
    }
    if(nex!=NULL)
    {
        head->next=reverseKtn(nex,len-k,k);
    }
    return prev;
}
 
void insertAtTail(Node *&head,int d)
{
    if(head==NULL)
    {
        head=new Node(d);
        return;
    }
    Node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new Node(d);
    return;
}
void DisplayLL(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }  
}
 
 
int main()
{
    Node *head=NULL;
    int n;
    cin>>n; 
    for (int i = 0; i <n; i++)
    {
        int d; cin>>d;
        insertAtTail(head,d); 
    }    

    int k;
    cin>>k;
    Node *r =reverseKtn(head,n,k); 
    DisplayLL(r); 
    return 0;
}