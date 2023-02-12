#include <stdio.h>
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
        if ((root->left == NULL) && (root->right == NULL))
        {
            printf("%d", root->info);
        }
        else
        {
            printf("%d -> ", root->info);
        }

        // Traverse right
        inorder(root->right);
    }
}

// Insert a node
struct node *insert(struct node **node, int info)
{
    struct node *p = *node;
    // Return a new node if the tree is empty
    if (p == NULL)
        return getnode(info);

    // Traverse and insert the node
    if (info < p->info)
        p->left = insert(&p->left, info);
    else
        p->right = insert(&p->right, info);

    return *node;
}

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

    printf("Inorder traversal: ");
    inorder(root);
}