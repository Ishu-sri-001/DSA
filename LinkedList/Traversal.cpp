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
    cout<<"null";
}
int main() {
    int n;
    cout<<"Enter size of linked list";
    cin>>n;
    cout<<"Enter elements";
    Node *head=createLinkedList(n);
    cout<<" The linked list is:";
    printLL(head);
    return 0;
}
