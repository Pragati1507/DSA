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
    Node *root= new Node();
    root->data =10;
    root->left =NULL;
    root->right=NULL;

    Node *n1= new Node();
    n1->data = 8;
    n1->left =NULL;
    n1->right=NULL;

    root->left=n1;

    Node *n2= new Node();
    n2->data =20;
    n2->left =NULL;
    n2->right=NULL;

    root->right=n2;

    Node *n3= new Node();
    n3->data =9;
    n3->left =NULL;
    n3->right=NULL;

    n1->right=n3;

    Node *n4= new Node();
    n4->data =18;
    n4->left =NULL;
    n4->right=NULL;

    n2->left=n4;

    cout<<"address of n1"<<"\t"<<root->left<<endl;
    cout<<"address of n3"<<"\t"<<root->left->right<<endl;
    cout<<"value of n3"<<"\t"<<root->left->right->data<<endl;
    cout<<"value of n4"<<"\t"<<root->right->left->data<<endl;

}