#include <iostream>
using namespace std;

int main() {
    
    // Given array
    int arr[5] = {7, 5, 9, 3, 2};
    
    // asking for the number to search
    int search;
    cout << "Type a number to search: ";
    cin >> search;

    //Searching
    int flag = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            flag = 1;
            cout << "The number is found in index: " << i << endl;
            break;
        }
    } 
    
    if (flag == 0) {
        cout << "The number " << search << " is not found in the array." << endl;
    }

    return 0;
}