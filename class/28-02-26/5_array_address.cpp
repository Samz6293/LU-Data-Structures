//Array Address

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};

    for(int i = 0; i < 3; i++) {
        cout << "Value: " << arr[i] 
             << " Address: " << &arr[i] << endl;
    }

    return 0;
}

