#include<iostream>
#include<queue>
int stepc=0;
using namespace std;
void top(int a[][10],int n){
stepc++;queue<int>q;
stepc++;int d,i,j,id[10]={-100},c;
for(j=0;j<n;i++)
{stepc++;
for(i=0;i<n;j++){stepc++;stepc++;
d=d+a[i][j];}
stepc++;
id[j]=d;cout<<id[j];
stepc++;
if(d==0){stepc++;
q.push(j);}
}
while(!q.empty()){stepc++;int k=q.front();cout<<k<<"->";stepc++;q.pop();
for(i=0;i<n;i++)
{stepc++;stepc++;if(a[i][k]==1){stepc++;id[i]--;}
if(id[i]==0){stepc++;q.push(i);}
}stepc++;}
}
int main(){
int v,e,a[10][10]={0},i,j;
cout<<"No. of vertices: ";
cin>>v;
cout<<"No. of edges: ";
cin>>e;
for(int k=0;k<e;k++)
{cout<<"Source & Dest."<<endl;
cin>>i>>j;
a[i][j]=1;}
top(a,v);
cout<<"Steps:"<<stepc;
}
