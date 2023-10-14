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
void deleteAtMid(Node* head,int n)
{
    Node* temp=head;
     int t=n/2;
     while(--t)
     {
        temp=temp->next;
     }
     Node* p=temp->next;
     temp->next=temp->next->next;
     delete p;
}
void insertAthead(Node*&head,int d)
{
     Node * n1= new Node(d);
     n1->next=head;
     head=n1;
}

void deleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;

}
void insertAtMid(Node* &head,int d,int n)
{
    Node* temp=head;
    int t=n/2;
    while(--t)
    {
        temp=temp->next;
    }
    Node* n1=temp->next;
    temp->next=new Node(d);
    temp->next->next=n1;    
}
void insertAtTail(Node* &head,int d)
{
    if(head==NULL)
    {
        head=new Node(d);
        return;
    }
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new Node(d);
}
void displayLL(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"->NULL";
}
void reverseLL(Node* &head)
{
    Node* p=NULL,*n=NULL;
    Node* c=head;
    while (c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}

int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d; cin>>d;
        insertAtTail(head,d);
        // insertAthead(head,d);
    }
    displayLL(head);
    insertAtMid(head,12,n);
    cout<<endl;
    displayLL(head);
    deleteAtHead(head);
    cout<<endl;
    displayLL(head);
    deleteAtMid(head,n);
    displayLL(head);
    reverseLL(head);
    cout<<endl;
    displayLL(head);
    return 0;
}