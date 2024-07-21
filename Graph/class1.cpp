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
    void addEdge(int u ,int v,int weight){ 
        g1[u][v]=weight;
        g1[v][u]=weight;
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
    bool edgereturn(int u,int v)
    {
        return(g1[u][v]!=0);

    }
};
int main()
{
    Graph obj(5);
    obj.addEdge(0,4,8);
    obj.addEdge(0,1,9);
    obj.addEdge(4,0,3);
    obj.addEdge(1,2,6);
    obj.addEdge(2,3,7);
    obj.addEdge(3,0,4);
    obj.print();
    cout<<"edge exsts of 4,0"<<"\t"<<(obj.edgereturn(4,0)?"yes":"No")<<endl;
    cout<<"edge exsts of 4,3"<<"\t"<<(obj.edgereturn(4,3)?"yes":"No")<<endl;

}

