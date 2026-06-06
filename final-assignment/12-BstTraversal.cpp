#include<iostream>
using namespace std;

// Node structure
struct Node{
    int data;
    Node* left;
    Node*right;
};

// Prototype
void inorder(Node* root);


int main() {

    /*
    ---- Insertion in tree ---- 
    Handled better in problem 5
    */

    // Main root
    Node* root = new Node();
    root->data = 20;
    root->left = new Node();
    root->right = new Node();

    // Left child of main root
    root->left->data = 10;
    root->left->left = nullptr;
    root->left->right = nullptr;

    // Right child of main root
    root->right->data = 30;
    root->right->left = nullptr;
    root->right->right = nullptr;
    
    cout << "Data in Binary Search Tree (Inorder): ";
    inorder(root);
    cout << endl;

}


void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}