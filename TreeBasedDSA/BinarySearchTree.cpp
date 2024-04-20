#include <iostream>

using namespace std;

struct node
{
    int value;
    node *left, *right;
};

node *newNode(int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->value = value;
    temp->left = temp->right = NULL;

    return temp;
}

void inOrder(node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

node *insert(node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->value)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
}

node *minValueNode(node *root)
{
    node *current = root;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->value)
        root->left = deleteNode(root->left, key);
    else if (key > root->value)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            node *temp = minValueNode(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, root->value);
        }
    }

    return root;
}

// 10 12 8 15 7 2 6

int main()
{
    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder traversal: ";
    inOrder(root);

    cout << "\nAfter deleting\n";

    root = deleteNode(root, 3);
    cout << "Inorder traversal: ";
    inOrder(root);
    return 0;
}