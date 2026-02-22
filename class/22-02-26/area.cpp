#include <iostream>
using namespace std;

#define PI 3.14159
float area(float r);

int main () {

    cout << "radius: ";
    float r;
    cin >> r;

    cout << "Area: " << area(r) << endl;
    return 0;
}

float area(float r) {
    return PI * r * r;
}