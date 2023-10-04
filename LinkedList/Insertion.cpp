// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next;
};

Node* newNode(int val)
{
    Node* temp=new Node;
    temp->data=val;
    temp->next=NULL;
    return temp;
}

Node* createLinkedList(int n)
{
    int a;
    Node *head=NULL;
    Node *tail=NULL;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        Node *temp=newNode(a);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else 
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
    return head;
}

void printLL(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<endl;
}

void insertion(Node*& head,int pos,int value)
{
    Node* tmp=newNode(value);
    if(pos==0)
    {
        tmp->next=head;
        head=tmp;
        return;
    }
    for (int i=0;i<pos-1;i++)
    {
        head=head->next;
    }
    tmp->next=head->next;
    head->next=tmp;
}
int main() {
    int n;
    cout<<"Enter size of linked list";
    cin>>n;
    cout<<"Enter elements";
    Node *head=createLinkedList(n);
    cout<<" The linked list is:";
    printLL(head);
    int pos,value;
    cout<<"Enter position and value";
    cin>>pos>>value;
    insertion(head,pos,value);
    printLL(head);
    return 0;
}
