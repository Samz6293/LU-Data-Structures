//Update Array Element

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index, newValue;

    cout << "Current Array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\nEnter index to update (0 to 4): ";
    cin >> index;

    if(index >= 0 && index < 5) {
        cout << "Enter new value: ";
        cin >> newValue;

        arr[index] = newValue;

        cout << "Array after update: ";
        for(int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    } else {
        cout << "Invalid index!";
    }
    cout << endl;
    return 0;
}
