#include <iostream>
#include <list>
using namespace std;
int c;
class Graph
{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int v, bool visited[], bool *rs);
    public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isCyclic();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
    c++;
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    c++;
}
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
    c++;
    if (visited[v] == false)
    {
        visited[v] = true;
        c++;
        recStack[v] = true;
        c++;
        list<int>::iterator i;
        c++;
        c++;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            c++;
            c++;
            if (!visited[*i] && isCyclicUtil(*i, visited, recStack))
            {
            return true;
            }
            else if (recStack[*i])
            {
            return true;
            }
            c++;
        }
    }
    recStack[v] = false;
    c++;
    c++;
    return false;
}
bool Graph::isCyclic()
{
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    c++;
    for (int i = 0; i < V; i++)
    {
        c++;
        visited[i] = false;
        c++;
        recStack[i] = false;
        c++;
    }
    c++;
    c++;
    for (int i = 0; i < V; i++)
    {
        c++;
        c++;
        if (isCyclicUtil(i, visited, recStack))
        return true;
    }
    return false;
}
int main()
{
    Graph g(5);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(2, 4);
    c= 0;
    if (g.isCyclic())
    cout << "Graph contains cycle \n";
    else
    cout << "Graph doesn't contain cycle \n";
    cout << "Number of steps:" << c;
    return 0;
}
