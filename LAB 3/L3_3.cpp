#include <iostream>
using namespace std;

int c=0;

void dfs(int graph[][30], int n, int u, bool visited[])
{
    visited[u] = true;
    for (int v = 0; v < n; v++)
    {
        if (graph[u][v])
        {
            if (!visited[v])
                dfs(graph, n, v, visited);
        }
    }
}

bool isConnected(int a[][30], int n)
{
    bool *vis = new bool[n];
    for (int u = 0; u < n; u++)
    {
        c++;
        for (int i = 0; i < n; i++)
        {
            c++;
            vis[i] = false;
            c++;
        }
        c++;
        c++;
        dfs(a, n, u, vis);
        for (int i = 0; i < n; i++)
        {
            c++;
            if (!vis[i])
            {
                c++;
                c++;
                return false;
            }
        }
        c++;
    }
    c++;
    return true;
}
int main()
{
    int n, g[30][30];
    cout << "Enter the number of vertex:\n";
    cin >> n;
    cout << "Fill the adjacency table:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];
    if (isConnected(g, n))
        cout << "The Graph is connected.";
    else
        cout << "The Graph is not connected.";
    cout << "\nNumber of steps : " <<c;
}
