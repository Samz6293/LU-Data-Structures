#include<iostream>
using namespace std;

// Maximum number of elements in our stack
#define MAX 5

// Prototypes
void push(int stack[], int &top, int number);
void pop(int stack[], int &top);
void peek(int stack[], int top);
void display(int stack[], int top);


int main() {

    int stack[MAX];
    int top = -1;

    // Operations
    pop(stack, top);
    peek(stack, top);
    display(stack, top);
    push(stack, top, 10);
    push(stack, top, 20);
    push(stack, top, 30);
    push(stack, top, 40);
    push(stack, top, 50);
    peek(stack, top);
    display(stack, top);
    push(stack, top, 60);
    pop(stack, top);
    pop(stack, top);
    display(stack, top);
}


void pop(int stack[], int &top) {

    cout << "Operation -> Pop" << endl;

    if (top == -1) {
        cout << "Underflow\n" << endl;
    }
    else {
        int item = stack[top];
        top -= 1;
    }
}


void peek(int stack[], int top) {

    cout << "Operation -> Peek" << endl;

    if (top == -1) {
        cout << "Underflow\n" << endl;
    }
    else {
        cout << "Top element: " << stack[top] << endl;
        cout << endl;
    }
}


void push(int stack[], int &top, int number) {

    cout << "Operation -> Push" << endl;

    if (top == MAX - 1) {
        cout << "Overflow\n" << endl;
    }
    else {
        top += 1;
        stack[top] = number;
    }

}


void display(int stack[], int top) {

    cout << "Operation -> Display" << endl;
    if (top == -1) {
        cout << "Stack is empty\n" << endl;
    }
    else {
        cout << "Elements in the stack: \n";
        for (int i=top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
