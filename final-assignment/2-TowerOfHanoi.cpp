#include <iostream>
using namespace std;

// Prototype
void hanoi(int n, char Beg, char Aux, char End);

int main() {
  int disks;
  cout << "Enter number of disks: ";
  cin >> disks;

  cout << "\n===============================\n";
  cout << "--- Tower of Hanoi Sequence ---";
  cout << "\n===============================\n" << endl;

  hanoi(disks, 'A', 'B', 'C');
}

void hanoi(int n, char Beg, char Aux, char End) {
  if (n == 1) {
    cout << "Move disk 1 from " << Beg << " to " << End << endl;
    return;
  }

  hanoi(n - 1, Beg, End, Aux);
  cout << "Move disk " << n << " from " << Beg << " to " << End << endl;

  hanoi(n - 1, Aux, Beg, End);
}
