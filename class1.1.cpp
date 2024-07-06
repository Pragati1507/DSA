#include<iostream>
#include<string.h>
using namespace std;
class Product
{
    public:
    int pid;
    string name;
    int price;
    Product()
    {

    }
    Product(int id,string n,int p)
    {
        pid =id;
        name = n;
        price =p;
    }
    void print()
    {
        
    }



};

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
}