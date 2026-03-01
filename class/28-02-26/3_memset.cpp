//memset

#include <iostream>
#include <cstring> //different header file
using namespace std;

int main() {
    int arr[5];

    memset(arr, 0, sizeof(arr));

    cout << "Array after memset:\n";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}


