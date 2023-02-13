#include <stdio.h>
#include<malloc.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left, *right;
};

// Create a node
struct node *getnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder Traversal
void inorder(struct node *root)
{
    if (root != NULL)
    {
        // Traverse left
        inorder(root->left);

        // Traverse root
        
        printf("%d -> ", root->info);
        // Traverse right
        inorder(root->right);
    }
}

// Insert a node
struct node *insert(struct node *node, int info)
{
    // Return a new node if the tree is empty
    if (node == NULL)
        return getnode(info);

    // Traverse and insert the node
    if (info < node->info)
        node->left = insert(node->left, info);
    else
        node->right = insert(node->right, info);

    return node;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);

    printf("Inorder traversal: ");
    inorder(root);
    return 0;
}