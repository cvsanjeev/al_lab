#include<iostream>
#include<stack>
using namespace std;
int stepc=0;
int conlo(int a[],int c){stepc++;int t,n=0;
for(int i=0;a[i]!=NULL;i++)n++;
stepc=n;
for(int i=0;i<n-1;i++){stepc++;
for(int j=0;j<n-i-1;j++)
{stepc++;stepc++;if(a[j]<a[j+1])
{stepc++;t=a[j];stepc++;a[j]=a[j+1];stepc++;a[j+1]=t;}}
}stepc++;stack<int> s;
cout<<"Sorted:";
for(int i=1;i<n;i++){
stepc++;stepc++;s.push(a[i]);
cout<<a[i]<<" ";}cout<<endl;
stepc++;while(s.top()<=c){stepc++;
c=c-s.top();stepc++;s.pop();}cout<<"Result: ";
stepc++;return c;}
int main()
{int a[10];int n,c;
cout<<"Array size:";cin>>n;
cout<<"El.:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Number:";cin>>c;
//int a[]={100,200,50,90,150,50,20,80};
cout<<conlo(a,c);cout<<"\nSteps:"<<stepc;
}
