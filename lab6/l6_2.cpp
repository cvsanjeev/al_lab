#include<iostream>
using namespace std;
void me(int a[],int p,int q,int r){
int m[q-p+1],n[r-q],i,j,k;
for(i=0;i<q-p+1;i++)
m[i]=a[p+i];
for(i=0;i<r-q;i++)
n[i]=a[q+1+j];
i=j=0;k=p;
while(i<q-p+1&&j<r-q)
{
if(m[i]<=n[j])
{a[k]=m[i];i++;}
else{a[k]=n[j];j++;}
k++;
}
while(i<q-p+1){
a[k]=m[i];
i++;k++;
}
while(j<r-q){
a[k]=n[j];
j++;k++;
}
}
void mes(int a[],int p,int r){
if(p<r){
int q=(p+r-1)/2;
mes(a,p,q);
mes(a,q+1,r);
me(a,p,q,r);
}
}
int main(){
int a[]={2,4,3,1};
mes(a,0,0);
for(int i=0;i<4;i++)
cout<<a[i]<<" ";
cout<<endl;
}
