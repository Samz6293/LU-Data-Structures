//Search in Array (Linear Search)

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    bool found = false;

    cout << "Array Elements: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\nEnter value to search: ";
    cin >> key;

    // Linear Search
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;  // Stop searching
        }
    }

    if(!found) {
        cout << "Element not found in array.";
    }

    return 0;
}
