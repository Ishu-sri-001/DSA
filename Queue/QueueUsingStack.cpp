#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int>s1,s2;

    void push(int data)
    {
        s1.push(data);
    }

    int pop()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
};

int main()
{
    Queue q;
    q.push(2);
    q.push(4);
    q.push(6);
    cout<<q.pop()<<endl;
    return 0;
}
