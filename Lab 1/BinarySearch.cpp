#include<iostream>
using namespace std;

int stepcount=0;
int binaryIt(int arr[],int key,int n){
    stepcount++;
    int high=n-1, low=0;
    stepcount++;
    while(low<=high){
        stepcount++;
        int mid= (high+low)/2;
        stepcount++;
        if(arr[mid]==key){
            stepcount++;
            return mid;
        }
        stepcount++;
        if(arr[mid]<key){
            stepcount++;
            low=mid+1;
        }
        stepcount++;
        if(arr[mid]>key){
            stepcount++;
            high=mid-1;
        }
    }
    stepcount++;
    return -1;
}

int stepcount1=0;
int binaryRec(int arr[],int key, int l, int h){
    stepcount1++;
    if(h>=1){
        stepcount1++;
        int mid= (h+1)/2;

        stepcount1++;
        if(arr[mid]== key){
            stepcount1++;
            return mid;
        }
        stepcount1++;
        if(arr[mid]>key){
            stepcount1++;
            return binaryRec(arr,key,l,mid-1);
        }
        stepcount1++;
        if(arr[mid]<key){
            stepcount1++;
            return binaryRec(arr,key,mid+1,h);
        }
    }
    stepcount1++;
    return -1;
}

int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >>  n;

    int k;
    cout << "Enter Element to be searched:";
    cin >> k;

    int arr[n];
    cout << "Enter elements: \n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res_i = binaryIt(arr, k, n);
    int res_r = binaryRec(arr, k, 0, n-1);

    cout << "Binary Search Iterative: ";
    if(res_i == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at " << res_i << endl;
    }
    cout << "Iterative Step Count: " << stepcount << endl;

    cout << endl;
    cout << "Binary Search Recursive: ";
    if(res_r == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at " << res_r << endl;
    }
    cout << "Recursive Step Count: " << stepcount1 << endl;

}

