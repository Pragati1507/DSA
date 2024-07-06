#include<iostream>
using namespace std;
class Employee
{
  int empid;
  string name;
  int salary;
     public:
        Employee()
        {
            cout<<"Employee class defalt costructor"<<endl;
        }
      Employee(int id ,string n,int s)
       {
        empid=id;
        name=n;
        salary=s;
        
        }
     void print()
        {
        cout<<"employee ID"<<"\t"<<empid<<endl;
        cout<<"employee name"<<"\t"<<name<<endl;
        cout<<"Employee salary"<<"\t"<<salary<<endl;
        }
};
class Node
{

  public:
  Employee obj;
  Node *next;
};
int main()
{ 
    // creating object//
    Employee e1(111,"pragati",34000);
    Employee e2(112,"Rj",34000);
    Employee e3(113,"anu",34000);
    //creating node//
    Node *n1=new Node();
    n1->obj=e1;
    n1->next=NULL;

    Node *n2=new Node();
    n2->obj=e2;
    n2->next=NULL;
    //pointing reference to next node//
    n1->next=n2;

    Node *n3=new Node();
    n3->obj=e3;
    n3->next=NULL;
    //pointing reference to next node//
    n2->next=n3;

    Node *current =new Node();
    current =n1;
    while (current !=NULL)
    {
        /* code */
        current->obj.print();
        current=current->next;
    }
}