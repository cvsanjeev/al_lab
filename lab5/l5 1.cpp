#include<iostream>
using namespace std;
int stepc=0;
void dji(int a[][10],int v,int n)
{
for(int i=0;i<v;i++){stepc++;
for(int j=0;j<v;j++){stepc++;
stepc++;
if(a[n][i]+a[i][j]<a[n][j]){stepc++;a[n][j]=a[n][i]+a[i][j];}}}
for(int i=0;i<v;i++)cout<<n<<"->"<<i<<":"<<a[n][i]<<" "<<endl;
}
int main()
{int a[10][10],v,e,i,j,w;
cout<<"Vertices:";cin>>v;
cout<<"Edges:";cin>>e;
for(i=0;i<v;i++)
for(j=0;j<v;j++)
if(i==j)a[i][j]=0;
else a[i][j]=1000;
for(int k=0;k<e;k++)
{cout<<"Source, dest, wt.:";cin>>i>>j>>w;
a[i][j]=w;}
cout<<"Ref vertex:";cin>>e;
dji(a,v,e);
cout<<"Steps:"<<stepc;}
