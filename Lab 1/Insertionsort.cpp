#include<iostream>
using namespace std;

int stepcount = 0;

void insertsort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        stepcount++;

        stepcount++;
        int j=i-1;

        stepcount++;
        int key=arr[i];

        for (;j>=0 && arr[j]>key;j--)
        {
            stepcount+= 2;


            stepcount++;
            arr[j+1] = arr[j];
        }
        stepcount++;

        stepcount++;
        arr[j+1]=key;
    }
    stepcount++;
}


int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >>  n;


    int arr[n];
    cout << "Enter elements: \n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorting the Array using Insertion Sort" << endl;
    insertsort(arr, n);
    cout <<"Sorted Array:"<< endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<  endl;
    cout << "Step Count: " << stepcount << endl;

}
