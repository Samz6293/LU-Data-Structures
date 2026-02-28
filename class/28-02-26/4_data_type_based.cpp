//Datatype Based Array

#include <iostream>
using namespace std;

int main() {
    int intArr[3] = {1, 2, 3};
    float floatArr[3] = {1.1, 2.2, 3.3};
    char charArr[3] = {'A', 'B', 'C'};

    cout << "Integer Array:\n";
    for(int i = 0; i < 3; i++)
        cout << intArr[i] << " ";

    cout << "\nFloat Array:\n";
    for(int i = 0; i < 3; i++)
        cout << floatArr[i] << " ";

    cout << "\nChar Array:\n";
    for(int i = 0; i < 3; i++)
        cout << charArr[i] << " ";

    return 0;
}

