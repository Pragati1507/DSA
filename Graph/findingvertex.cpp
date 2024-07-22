#include <iostream>
using namespace std;
class Graph1
{
    int g1[6][6];

public:
    int data;
    Graph1(int Value)
    {
        data = Value;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                g1[i][j] = 0;
            }
        }
    }
    void Add_Edge(int Source, int Destination, int weight)
    {
        g1[Source][Destination] = weight;
        g1[Source][Destination] = weight;
    }
    void print()
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << g1[i][j] << " ";
                /* code */
            }
            cout << endl;
        }
    }
    bool edge_return(int Source, int Destination)
    {
        return (g1[Source][Destination] != 0);
    }
    void Find_vertex(int v)
    {
        cout << "vertex" << "\t" << v << "\t" << "is connected" << "\t";
        for (int i = 0; i < 6; i++)
        {
            if (g1[v][i] != 0)
            {
                cout << i << "\t" << "(weight :" << g1[v][i] << ")";
                /* code */
            }
        }
        cout << endl;
    }
};
int main()
{
    Graph1 obj(6);
    obj.Add_Edge(0, 4, 8);
    obj.Add_Edge(0, 1, 9);
    obj.Add_Edge(4, 0, 3);
    obj.Add_Edge(1, 2, 6);
    obj.Add_Edge(2, 3, 7);
    obj.Add_Edge(3, 0, 4);
    obj.Add_Edge(5, 2, 7);
    obj.Add_Edge(5, 5, 4);
    obj.print();
    cout << "edge exsts of 4,0" << "\t" << (obj.edge_return(4, 0) ? "yes" : "No") << endl;
    cout << "edge exsts of 4,3" << "\t" << (obj.edge_return(4, 3) ? "yes" : "No") << endl;
    obj.Find_vertex(4);
    obj.Find_vertex(0);
}