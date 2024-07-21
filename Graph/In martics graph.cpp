#include<iostream>
using namespace std;
class Graph
{
    int g1[5][5];
    public:
    int data;
    Graph(int Value)
    {
        data=Value;
        for ( int i= 0; i <5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                g1[i][j]=0;
            }
           
        }
        
    }
    void addEdge(int u ,int v){ 
        g1[u][v]=1;
        g1[v][u]=1;
    } 
    void print(){
        for(int i=0;i<5;i++)
        {
            for ( int j = 0; j <5; j++)
            {
                cout<<g1[i][j]<<" ";
                /* code */
            }
            cout<<endl;
        }
    }
};   
int main()
{
    Graph obj(5);
    obj.addEdge(0,4);
    obj.addEdge(0,1);
    obj.addEdge(4,0);
    obj.addEdge(1,2);
    obj.addEdge(2,3);
    obj.addEdge(3,0);
    obj.print();
}