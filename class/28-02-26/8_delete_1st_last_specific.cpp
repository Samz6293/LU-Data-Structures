//Delete (First, Specific Index, End)


#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, index;

    cout << "Current Array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nChoose deletion type:\n";
    cout << "1. Delete First Element\n";
    cout << "2. Delete Specific Index\n";
    cout << "3. Delete Last Element\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        // Shift elements left
        for(int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    else if(choice == 2) {
        cout << "Enter index (0 to " << size-1 << "): ";
        cin >> index;

        if(index >= 0 && index < size) {
            for(int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        } else {
            cout << "Invalid index!";
        }
    }
    else if(choice == 3) {
        size--; // Just reduce size
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
