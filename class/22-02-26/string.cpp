#include <iostream>
#include <string>
using namespace std;

int main () {

    string name;
    cin >> name;

    int length = name.length();
    
    if (length % 3 == 0) {
        cout << "YES. Divisible by 3" << endl;
    }

    else {
        cout << "NO. Not divisible by 3" << endl;
    }
    
    return 0;
}