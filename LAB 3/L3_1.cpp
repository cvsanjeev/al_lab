#include<iostream>
using namespace std;
int counter,edges,vertices;
class Stack{
int top; int a[100];
public:
    Stack(){top=-1;}
    bool isEmpty();
    void push(int x);
    int pop();
};
bool Stack::isEmpty()
{
    if(top<0)return true;
    else return false;
}
void Stack::push(int x)
{
    if(top<100)
    {
    top++;a[top]=x;
    }
    else cout<<"full\n";
}
int Stack::pop()
{
    if(!isEmpty())return a[top--];
    else{cout<<"Empty\n";return 0;}
}
void dfs(int a[][10],int *visited, int source, int *parent)
{
    counter++;visited[source]=1;
    counter++;
    for(int i=1;i<=vertices;i++)
    {
        counter++;
        if(a[source][i-1]==1&&!visited[i-1])
        {
            counter++;
            parent[i-1]=source;
            counter++;
            dfs(a,visited,i-1,parent);counter++;
        }
    }
    counter++;
}
int main(){
int a[10][10];int counter=0,i,j;
cout<<"No. of vertices:";
cin>>vertices;
cout<<"No. of edges:";cin>>edges;
for(i=0;i<vertices;i++)
    for(j=0;j<vertices;j++)
    a[i][j]=0;int p,q=0;
    for(i=1;i<=edges;i++)
    {
        cout<<"source:";cin>>p;
        cout<<"dest:";cin>>q;
        a[p-1][q-1]=1;
    }
    cout<<"Adj. Matrix:\n\n";
    for(i=0;i<vertices;i++)
    {
    for(j=0;j<vertices;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }
    cout<<endl;

    cout<<"Source:";int source; cin>>source;
    cout<<"Source:";int destination; cin>>destination;
    int visited[10];
    counter++;
    for(int i=0;i<vertices;i++)
    {
    counter++;
    visited[i]=0;
    counter++;
    }
    counter++;
    int parent[10];
    counter++;
    for(i=0;i<vertices;i++)
    {
        counter++;parent[i]=i; counter++;    }
counter++;
dfs(a,visited,source-1,parent);
counter++;
if(!visited[destination-1])
{counter++; cout<<"No path";
}
else{counter++;
Stack s; counter++;
while(parent[destination-1]!=destination-1)
{
    counter++;
    s.push(destination);
    counter++;
    destination=parent[destination-1]+1;counter++;
}
counter++;
s.push(destination);counter++;
while(!s.isEmpty())
{
    counter++;cout<<s.pop()<<"->";

}
counter++;
}
cout<<"\nNo. of steps:"<<counter;
}
