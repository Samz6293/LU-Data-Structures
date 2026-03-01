//One Dimensional Array Declaration 
#include <iostream>
using namespace std;

int globalArray[3] = {1, 2, 3};   // Global array

int main() {
    int localArray[3] = {4, 5, 6}; // Local array

    cout << "Global Array:\n";
    for(int i = 0; i < 3; i++)
        cout << globalArray[i] << " ";

    cout << "\nLocal Array:\n";
    for(int i = 0; i < 3; i++)
        cout << localArray[i] << " ";
    cout << endl;
    return 0;
}


