//Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 9, 1, 6};
    int n = 5;

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            
            // Compare two adjacent elements
            if(arr[j] > arr[j + 1]) {
                // Swap them
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Array after  each pass
        cout << "Array after pass " << i+1 << ": ";
        for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Print sorted array
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}