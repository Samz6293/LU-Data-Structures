#include<iostream>
#include<string>
using namespace std;

int main () {

    int stack[50];
    int top = -1;
    string word;
    cout << "Type postfix expression: ";
    cin >> word;

    for (int i=0, n=word.length(); i < n; i++) {

        if (word[i] >= '0' && word[i] <= '9') {
            top++;
            stack[top] = word[i] - '0'; // Converting to int
        }
        else {
            char op = word[i];
            
            int operand2 = stack[top];
            top--;
            int operand1 = stack[top];
            top--;

            int result;
            if (op == '+') result = operand1 + operand2;
            else if (op == '-') result = operand1 - operand2;
            else if (op == '*') result = operand1 * operand2;
            else if (op == '/') result = operand1 / operand2;
            
            top++;
            stack[top] = result;
        }
    }

    cout << "Final result: " << stack[top] << endl;
}