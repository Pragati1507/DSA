#include<iostream>
using namespace std;
class Node
{
   public:
   int data;
   Node *next;
};
int main()
{
    Node *n1=new Node();
    n1->data=10;
    n1->next=NULL;

    Node *n2=new Node();
    n2->data=20;
    n2->next=NULL;
    n1->next=n2;

    Node *n3=new Node();
    n3->data=20;
    n3->next=NULL;
    n2->next=n3;

    Node *current=new Node();
    current =n1;
    while (current != NULL)
    {
        /* code */
        cout<<current->data<<endl;
        current =current->next;

    }
    

 /*cout<<n1->data<<endl;
 cout<<n1->next<<endl;//address of n2
 cout<<n2->data<<endl;
 cout<<n2->next<<endl;*/
}
