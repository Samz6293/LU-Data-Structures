#include <iostream>
using namespace std;

// Creating a structure Node which will hold a number and the pointer to another Node
struct Node {
    int number;
    Node *next;
};

int main(){
    int n;
    cout << "No. of data to store: ";
    cin >> n;

    // Initializing head and follow to populate nodes
    Node *head = nullptr;
    Node *follow = nullptr;

    for (int i=0; i<n; i++){
        
    // Each iteration we are allocating RAM required by a Node and storing the address in new_box 
        Node *new_box = new Node;

        cout << "Number to insert at position" << i+1 << ": ";
        
        // new_box holds a nnumber and points to nothing        
        cin >> new_box->number;
        new_box->next = nullptr;

        // Keeps track of head this way to print in order the data was provided
        if (head == nullptr) {
            head = new_box;
            follow = new_box;
        }
        // Each iteration we update follow to connect the nodes
        else {
            follow->next = new_box;
            follow = new_box;
        }
    }

    // Printing the data of nodes
    Node *ptr = head;
    while (ptr != nullptr) {
        cout << ptr->number << endl; //no. at the node
        cout << ptr->next << endl; // address of the node
        ptr = ptr->next;
    } 
}