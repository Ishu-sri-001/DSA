#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

class Stack
{
    int size;
    Node* top;
    public:
        Stack()
        {
            top=NULL;
            size=0;
    }
    void push(int val)
    {
        Node* temp= new Node(val);
        temp->next=top;
        size++;
        top=temp;
    }
    int pop()
    {
        if(top==NULL)
        {
            cout<<"\n Stack Underflow";
            return 0;
        }
        int ans=top->data;
        size--;
        top=top->next;
        return ans;
    }
    int peek()
    {
        if(top==NULL)
        {
            cout<<"\n Stack empty";
            return 0;
        }
        return top->data;
    }
    bool isEmpty()
    {
        return top==NULL;
    }
    int length()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(5);
    int d=s.peek();
    cout<<d;
}
