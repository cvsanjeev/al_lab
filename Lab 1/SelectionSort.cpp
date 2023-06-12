#include<iostream>
using namespace std;

int stepcount=0;
void selectionsort(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
            stepcount++;

        stepcount++;
        int mini = i;


        for (int j = i+1; j < n; j++) {
                stepcount++;
                stepcount++;
                if (arr[j] < arr[mini]) {
                        stepcount++;
                        mini = j;
            }
        }
        stepcount++;

        stepcount++;
        int temp = arr[mini];

        stepcount++;
        arr[mini] = arr[i];

        stepcount++;
        arr[i] = temp;
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

    cout << "Sorting the Array using Selection Sort" << endl;
    selectionsort(arr, n);
    cout << "Sorted Array: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<  endl;
    cout << "Step Count: " << stepcount << endl;

}
