#include<iostream>
using namespace std;

int recursiveSum (int n);

int main() {
    //type number to add sum upto
    cout << "Type number for summation: ";
    int n;
    cin >> n;
    cout << "The sum upto " << n << " is: " << recursiveSum(n) << endl;
}

int recursiveSum (int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + recursiveSum(n-1);
    }
}
