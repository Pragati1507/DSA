#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;

};
int main()
{
    int no;
    cout<<"enter a number add in tree";
    cin>>no;

    Node *newnode=new Node();
    newnode->data=no;
    newnode->left=NULL;
    newnode->right=NULL;

    Node *root=new Node();
    root->data=10;
    if (root==NULL)
    {
        root=newnode;
        cout<<root->data<<endl;
        cout<<root<<endl;
        cout<<newnode<<endl;

        /* code */
    }
    else{
        if (no <root->data)
        {
            root->left=newnode;
           cout<<newnode->data<<endl;
        cout<<root->left<<endl;
        cout<<newnode<<endl;  /* code */
        }
        else
        {
            root->right=newnode;
            cout<<newnode->data<<endl;
        cout<<root->right<<endl;
        cout<<newnode<<endl;
        }
    }
    

}
