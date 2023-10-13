#include <iostream>
using namespace std;

class Queue
{
    int capacity;
    int *array;
    int front,rear;
    public: Queue(int size)
    {
        capacity=size;
        array=new int[size];
        front=rear=-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }

    bool isFull()
    {
        return ((rear+1)%capacity==front);
    }
    void enqueue(int data)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1)
            front=0;
        rear=(rear+1)%capacity;
        array[rear]=data;
    }
    int dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int result=array[front];
        if(front==rear)
            front=rear=-1;
        else 
            front=(front+1)%capacity;
        return result;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Empty Queue"<<endl;
            return -1;
        }
        return array[front];
    }

    int size()
    {
        if(isEmpty())
            return 0;
        else if (rear >= front) 
            return rear - front + 1;
            return capacity - front + rear + 1;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    cout<<q.size();
}
