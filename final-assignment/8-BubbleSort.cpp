#include<iostream>
using namespace std;
void traverse (int arr[], int n); 
int main () {

    cout << "Type length of array: ";
    int n;
    cin >> n;
    int arr[n];    //Initialize array of size n

    //Populate
    cout << "Type the numbers: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    //Bubble Sort
    for (int j=0; j<n-1; j++) {
        for (int k=0; k<n-1-j; k++) {
            if (arr[k] > arr[k+1]) {
                swap(arr[k], arr[k+1]);
            }
        }
    }   // Sorting end

    traverse(arr, n);
}


void traverse (int arr[], int n) {

    cout << "Final Array: ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
