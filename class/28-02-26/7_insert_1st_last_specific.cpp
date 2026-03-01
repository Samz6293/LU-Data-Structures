//Insert at First, Specified Index, End


#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Initial array
    int size = 5;  // Current number of elements
    int choice, value, index;

    cout << "Current Array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nChoose where to insert:\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at Specific Index\n";
    cout << "3. Insert at End\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value to insert: ";
    cin >> value;

    if(choice == 1) {
        // Shift all elements to the right
        for(int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value; // Insert at first position
        size++;
    }
    else if(choice == 2) {
        cout << "Enter index (0 to " << size-1 << "): ";
        cin >> index;

        if(index >= 0 && index <= size) {
            for(int i = size; i > index; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            size++;
        } else {
            cout << "Invalid index!";
        }
    }
    else if(choice == 3) {
        arr[size] = value; // Insert at last
        size++;
    }
    else {
        cout << "Invalid choice!";
    }

    cout << "\nUpdated Array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
