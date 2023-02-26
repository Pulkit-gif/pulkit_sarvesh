#include <iostream>
#include <vector>

using namespace std;


class Graph
{
    int V;           
    vector<int> *adj; 

public:
    Graph(int V)
    {
        this->V = V;
        adj = new vector<int>[V];
    }

    
    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " is connected to: ";
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main()
{
    
    Graph g(5);

   
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

   
    g.printGraph();

    return 0;
}
