#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
    Node(int d, Node *n)
    {
        data = d;
        next =n;
    }

};

int sqrtnum(int n)
{ //base condition
    if(n>10)
    return 0;
    int sqr =n*n;
    cout<<sqr<<endl;
    return sqrtnum(n-1);
}
int creatNode(int n)
{
    if(n>10)
    return 0;
    Node *n1=new Node(n,NULL);
    cout<<n1->data<<endl;
    cout<<n1<<endl; 
    return creatNode(n-1);   
}
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    sqrtnum(num);
    creatNode(num);
}