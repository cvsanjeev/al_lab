#include<iostream>
using namespace std;

int stepcount=0;
void bubsort(int arr[],int n){
    for (int i=0;i<n-1;i++){
            stepcount++;
    for(int j=0;j<n-i-1;j++){
        stepcount++;
        stepcount++;
        if(arr[j]>arr[j+1]){
            stepcount++;
            int temp=arr[j];

            stepcount++;
            arr[j]=arr[j+1];

            stepcount++;
            arr[j+1]=temp;
        }
    }
    stepcount++;

    }
    stepcount++;
}

int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorting the array using bubble sort" << endl;
    bubsort(arr,n);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Step Count:"<<stepcount<<endl;

}
