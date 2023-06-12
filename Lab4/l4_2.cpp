#include<iostream>
using namespace std;
int stepc=0;
int knap(int v[],int w[],int l)
{ stepc++;int c=0,i,j;
for(i=0;v[i]!='\0';i++){stepc++;
for(j=i+1;v[j]!='\0';j++){stepc++;stepc++;
if(v[i]+v[j]>=c&&w[i]+w[j]<=l){stepc++;
c=v[i]+v[j];}}}
return c;
}
int main(){
int v[10],w[10];int l,n;
cout<<"Length:";cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Value:";cin>>v[i];
cout<<"Wt:";cin>>w[i];
}
cout<<"Limit:";cin>>l;
cout<<"Result:"<<knap(v,w,l)<<endl;cout<<"Steps:"<<stepc;
}
