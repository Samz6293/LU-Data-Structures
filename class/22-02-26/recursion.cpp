#include <iostream>
using namespace std;

int recursion(int a);

int main () {
    
    cout << "Choose number to add sum upto: ";
    int a;
    cin >> a;

    int result = recursion(a);
    cout << "Sum: " << result << endl;
    return 0;
}

int recursion(int a) {

    if (a == 1) {
        return a;
    }
    return a + recursion(a-1);
}