#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

struct Queue
{
    Node* front,*rear;
    Queue()
    {
        front=rear=NULL;
    }

    void enqueue(int data)
    {
        Node* temp=new Node(data);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=rear->next;
    }

    int dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty";
            return 0;
        }
        int ans=front->data;
        front=front->next;
        return ans;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout<<"queue front "<<q.front->data<<endl;
    cout<<"queue rear "<<q.rear->data;
    return 0;
}
