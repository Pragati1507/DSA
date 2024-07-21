#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node *insert(Node *root,int data){
    if(root==NULL)
    {
        return new Node(data);
    }
    if (data<root->data)
    {
        /* code */
        root->left=insert(root->left,data);
    }
    else if (data> root->data)
    {
        /* code */
        root->right=insert(root->right,data);
    }
    return root; 
}
void Inodrder(Node *root)
{
    if (root!=NULL)
    {
        /* code */
        Inodrder(root->left);
         cout<<root->data<<" ";
        Inodrder(root->right);
       
    }
    
}
void preodrder(Node *root)
{
    if (root!=NULL)
    {
        /* code */
        cout<<root->data<<" ";
        preodrder(root->left);
        preodrder(root->right);
    }
    
}
void postodrder(Node *root)
{
    if (root!=NULL)
    {
        /* code */
        postodrder(root->left);
        postodrder(root->right);
        cout<<root->data<<" ";
    }
    
}
Node *findMin(Node *root)
{
    while (root->left!=NULL)
    {
        root=root->left;
        /* code */
    }
    cout<<root->data<<endl;
    
}
Node *findMax(Node *root)
{
    while (root->right!=NULL)
    {
        root=root->right;
        /* code */
    }
    cout<<root->data<<endl;
    
}
Node *findValue(Node *root,int value ,Node *Parent =NULL)
{
    
   if (root==NULL)
   {
    /* code */
    return NULL;
   }
   if (root->data==value)
   {
    if (Parent!=NULL)
    {
        if (Parent->left==root)
        {
           
            cout<<"data found left side of"<<Parent->data<<endl;
        }
        else
        {
            cout<<"data found right side of "<<Parent->data<<endl;
        }    
    }
   }
   if (value<root->data)
   {
    /* code */
    return findValue(root->left,value,root);
   }
   else{
    return findValue(root->right,value,root);
   }
   
   
}
int getHeight(Node *root)
{
    if (root==NULL)
    {
        return 0;
    }
    int leftHeight=getHeight(root->left);
       
       int rightHeight=getHeight(root->right);

    return max(leftHeight,rightHeight)+1;
    
}
int main()
{
    Node *root =NULL;
    root=insert(root,40);
    insert(root,30);
    insert(root,50);
    insert(root,25);
    insert(root,35);
    insert(root,45);
    insert(root,60);
    insert(root,15);
    insert(root,28);
    insert(root,55);
    insert(root,70);

    int H=getHeight(root);
    cout<<"height of tree"<<"\t"<<H<<endl;
    
    findMax(root);
    findMin(root);

    cout<<"Inorder"<<endl;
    Inodrder(root);
    cout<<endl;


    cout<<"Preorder"<<endl;
    preodrder(root);
    cout<<endl;


    cout<<"Postorder"<<endl;
    postodrder(root);
    cout<<endl;

    cout<<"Minimum Value"<<endl;
    findMin(root);
    cout<<endl;

    cout<<"Maximum Value"<<endl;
    findMax(root);
    cout<<endl;
    
    Node *n= findValue(root,70);
    cout<<"value found"<<endl;
    cout<<n->data<<endl;
}