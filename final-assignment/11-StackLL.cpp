#include<iostream>
using namespace std;

// Structure of a node
struct Node {
    int number;
    Node* next;
};

// Prototypes
void push(Node* &top, int data);
void pop(Node* &top);
void display(Node* top);


int main() {
    Node* top = nullptr;
    pop(top);
    display(top);
    push(top, 10);
    display(top);
    pop(top);
    display(top);
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    push(top, 50);
    display(top);
}


void pop(Node* &top) {

    cout << "Operation -> Pop" << endl;

    if (top == nullptr) {
        cout << "Underflow\n" << endl;
    }
    else {

        Node* temp = top;
        int number = temp->number;
        top = top->next;
        delete temp;

        cout << "Popped " << number << " from the stack\n" << endl;
    }
}


void push(Node* &top, int data) {

    cout << "Operation -> Push" << endl;

    // Make a new node to connect to stack
    Node* newNode = new Node();
    
    // Populate the new Node
    newNode->number = data;
    newNode->next = top;

    // Update top
    top = newNode;
}


void display(Node* top) {

    cout << "Operation -> Display" << endl;
    if (top == nullptr) {
        cout << "Stack Empty\n" << endl;
        return;
    }

    Node* ptr = top;
    cout << "Numbers in the stack: ";
    while (ptr != nullptr) {
        cout << ptr->number << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
