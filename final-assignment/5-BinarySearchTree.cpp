#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Prototypes
void insert(Node *&root, int val);
void inorder(Node *root);
void search(Node *root, int target);
Node* deleteNode (Node* root, int val);
Node* inorderSuccessor (Node* root);


int main()
{
    Node *root = nullptr;

    // Building the tree
    insert(root, 50);
    insert(root, 60);
    insert(root, 40);
    insert(root, 10);
    insert(root, 45);
    insert(root, 70);

    cout << "In order traversal: ";
    inorder(root);
    cout << endl;

    // Searching in tree
    int target = 60;
    cout << "Searching for: " << target << endl;
    search(root, target);

    target = 80;
    cout << "Searching for: " << target << endl;
    search(root, target);


    // Deleting from tree
    cout << "Deleting 10 (Leaf Node)" << endl;
    root = deleteNode(root, 10);
    cout << "In order traversal: ";
    inorder(root);
    cout << endl;


    cout << "Deleting 60 (One child)" << endl;
    root = deleteNode(root, 60);
    cout << "In order traversal: ";
    inorder(root);
    cout << endl;


    cout << "Deleting 50 (Two children)" << endl;
    root = deleteNode(root, 50);
    cout << "In order traversal: ";
    inorder(root);
    cout << endl;
 
}

void insert(Node *&root, int val)
{

    if (root == nullptr)
    {

        Node *newNode = new Node();
        // Populating newNode
        newNode->data = val;
        newNode->left = nullptr;
        newNode->right = nullptr;

        // Attaching newNode with the tree
        root = newNode;
        return;
    }

    // Keep going down the tree for right place
    if (val < root->data)
    {
        insert(root->left, val);
    }
    else if (val > root->data)
    {
        insert(root->right, val);
    }
    /* Usage of else if is due to
         Standard binary trees
     not allowing duplicate numbers */
}

void inorder(Node *root)
{

    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void search(Node *root, int target)
{

    if (root == nullptr)
    {
        cout << "Target not found" << endl;
        return;
    }

    if (target == root->data)
    {
        cout << "Target found " << endl;
    }
    else if (target < root->data)
    {
        return search(root->left, target);
    }
    else
    {
        return search(root->right, target);
    }
}


Node* deleteNode (Node* root, int val) {

    if (root == nullptr) {
        return root;
    }

    // Search for val
    if (val < root->data) {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data) {
        root->right = deleteNode(root->right, val);
    }
    else { // val found

        // Case 1: Leaf node
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        
        // Case 2: One child
        else if (root->left == nullptr) { // left child empty
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) { // right child empty
            Node *temp = root->left;
            delete root;
            return temp;
        }
        
        // Case 3: Two childs
        else {

            Node* temp = inorderSuccessor(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}


Node* inorderSuccessor (Node* root) {

    while (root->left !=  nullptr) {
        root = root->left;
    }

    return root;
}