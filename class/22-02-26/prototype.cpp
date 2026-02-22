#include<iostream>
using namespace std;

int add(int a, int b);

int main () {

    cout << "Choose numbers with spaces: ";
    int a,b;
    cin >> a >> b;

    int result = add(a, b);
    cout << result << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}