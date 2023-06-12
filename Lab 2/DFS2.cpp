#include<iostream>
#include<list>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

void display_graph(list<int> graph[], int v){
    for(int i=0; i<v; i++){
        cout<<i<<": ";
        for(auto j=graph[i].begin(); j != graph[i].end(); j++){
            cout<<*j<<" ";
        }
        cout<<endl;
    }
}

void add_edge(list<int> graph[], int u, int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void dfs(list<int> graph[], int u, int v, int key){
    stack<int> s;
    s.push(key);
    int visited[v];
    for(int i=0; i<v;i++)
        visited[i]=0;
    while(!s.empty()){
            int node = s.top();
            s.pop();
            if(visited[node]==0){
            visited[node]=1;
            cout<<node<<" ";
            for(auto i = graph[node].begin(); i != graph[node].end(); i++){
                if(visited[*i]==0)
                s.push(*i);

            }
            }
    }
}


int main(){
    int v = 6;      //there are 6 vertices in the graph
   //create an array of lists whose size is 6
   cout<<"Program Starts!"<<endl;
   list<int> adj_list[v];
   add_edge(adj_list, 0, 4);
   add_edge(adj_list, 0, 3);
   add_edge(adj_list, 1, 2);
   add_edge(adj_list, 1, 4);
   add_edge(adj_list, 1, 5);
   add_edge(adj_list, 2, 3);
   add_edge(adj_list, 2, 5);
   add_edge(adj_list, 5, 3);
   add_edge(adj_list, 5, 4);
   cout<<"hello"<<endl;
   fflush(stdin);
   display_graph(adj_list, v);
   fflush(stdin);
   dfs(adj_list, 9, 6, 1);
   fflush(stdin);
   return 0;
}
