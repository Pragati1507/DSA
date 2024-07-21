#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *lnode();
    Node *rnode();
    Node(int Value)
    {
        data =Value;
        lnode=NULL;
       rnode=NULL; 
    }
};
Node *insert(Node *root,int root)
{
    if(root==NULL)
    {
        return new Node(data);
    }
    if (data<root->data)
    {
        root->lnode=insert(root->data)
        /* code */
    }
    
}
void inorder(Node *root){
    if (root!=NULL)
    {
        inorder(root->lnode);
        cout<<root->data<<" ";
        inorder(root->rnode);
        /* code */
    }
    
}
int main(){
    Node *root=NULL;
    root=insert(root,50);
    insert(root,60);
    insert(root,40);
    insert(root,25);
    insert(root,80);
    insert(root,35);
    inorder(root);


}