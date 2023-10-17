#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    Node* left,*right;
    int data;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

Node* createTree()
{
    Node* root=NULL;
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    if(data==-1)
        return NULL;
    root=new Node(data);
    cout<<"Enter left side for "<<data<<endl;
    root->left=createTree();
    cout<<"Enter right side for "<<data<<endl;
    root->right=createTree();
    return root;
}

int main()
{
    Node* root=createTree();
    cout<<root->data;
}
