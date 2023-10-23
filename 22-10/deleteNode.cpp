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
 Node * DeleteNode(Node *head)
    {
        Node *cur = head;
        Node *prev = NULL;
        Node *next;
    
        while(cur!=NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
    
        head = prev;
     
        Node *current = head;
        Node *maxNode = head;
        Node *temp=NULL;
    
         while (current != NULL && current->next != NULL)
         {
             if(current->next->data < maxNode->data)
             {
                 temp = current->next;
                 current->next = temp->next;
                 delete temp;
             }
             else
             {
                 current = current->next;
                 maxNode= current;
             }
         }
         cur = head;
         prev = NULL;
         next=NULL;
         while(cur!=NULL)
         {
             next = cur->next;
             cur->next = prev;
             prev = cur;
             cur = next;
         }
         head = prev; 
        return head;
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
    Node *h1=DeleteNode(head);
    cout<<endl;
    DisplayLL(h1); 
    return 0;
}