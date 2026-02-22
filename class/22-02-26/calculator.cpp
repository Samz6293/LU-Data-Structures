#include<iostream>

using namespace std;

int main() {
    
    char op;
    cout << "Choose an operaton: + - * / %: ";
    cin >> op;

    cout << "Choose numbers with spaces: ";
    int a,b;
    cin >> a >> b;

    if (op == 43) {
        cout << a + b << endl;
    }

    else if (op == 45) {
        cout << a - b << endl;
    }

    else if (op == 42) {
        cout << a * b << endl;
    }

    else if (op == 47) {
        cout << a / b << endl;
    }

    else if (op == 37) {
        cout << a % b << endl;
    }

}