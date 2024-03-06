#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *left;
    struct node *right;
};
void inOrder(struct node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf(" %d ", root->item);
    inOrder(root->right);
}
void preOrder(struct node *root)
{
    if (root == NULL)
        return;
    printf(" %d ", root->item);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->item);
}
struct node *createNode(item)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = item;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
struct node *inserAtLeft(struct node *root, int item)
{
    root->left = createNode(item);
    return root->left;
}
struct node *insertAtRight(struct node *root, int item)
{
    root->right = createNode(item);
    return root->right;
}
int main()
{
	int a,b,c,d,e;
    struct node *root = createNode(a);
    inserAtLeft(root, b);
    insertAtRight(root, c);

    inserAtLeft(root->left, d);
    insertAtRight(root->left, e);

    printf("Inorder traversal : ");
    inOrder(root);

    printf("\nPreorder traversal : ");
    preOrder(root);

    printf("\nPostorder traversal : ");
    postOrder(root);
}
