#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void preOrderTraversal(struct Node *current)
{
    if (current == NULL)
        return;
    cout << current->data << " ";
    preOrderTraversal(current->left);
    preOrderTraversal(current->right);
}

void inOrderTraversal(struct Node *current)
{
    if (current == NULL)
        return;

    inOrderTraversal(current->left);
    cout << current->data << " ";
    inOrderTraversal(current->right);
}

void postOrderTraversal(struct Node *current)
{
    if (current == NULL)
        return;

    postOrderTraversal(current->left);
    postOrderTraversal(current->right);
    cout << current->data << " ";
}

//           1
//      12       8
//   13   -   15  14
// 16 17 - -  - - - 18

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(8);
    root->left->left = new Node(13);
    root->right->left = new Node(15);
    root->right->right = new Node(14);
    root->left->left->left = new Node(16);
    root->left->left->right = new Node(17);
    root->right->right->right = new Node(18);

    cout << "Preorder Traversal: ";
    // Preorder Traversal: Root -> Left -> Right
    // Output: 1 12 13 16 17 8 15 14 18
    preOrderTraversal(root);

    cout << "\nInorder Traversal: ";
    // Inorder Traversal: Left -> Root -> Right
    // Output: 16 13 17 12 1 15 8 14 18
    inOrderTraversal(root);

    cout << "\nPostorder Traversal: ";
    // Postorder Traversal: Left -> Right -> Root
    // Output: 16 17 13 12 15 18 14 8 1
    postOrderTraversal(root);

    return 0;
}