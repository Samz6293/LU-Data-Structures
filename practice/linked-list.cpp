#include <iostream>   //This is a stack example, LIFO
using namespace std;

struct Node{
    int number;
    Node *next;
};

int main() {
    int n;
    cout << "No. of data to store: ";
    cin >> n;

    Node *head = nullptr;
    
    for (int i = 0; i < n; i++) {
        Node *new_box = new Node;

        cout << "Type the number for position " << i+1 << ": ";
        cin >> new_box->number;

        new_box->next = head;
        head = new_box;

    }

    Node *ptr = head;
    
    while (ptr != nullptr) {
        cout << ptr->number << endl;
        ptr = ptr->next;
    } 
}

