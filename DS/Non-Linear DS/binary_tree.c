#include <stdio.h>
#include <stdlib.h>
struct binary_tree
{
    int data;      
    struct binary_tree *left;
    struct binary_tree *right;
};
struct binary_tree* createNode( int x){
    struct binary_tree *newnode = malloc(sizeof(struct binary_tree));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void inOrder(struct binary_tree *Node){
    if(Node == NULL){
        return;
    }
    inOrder(Node-> left);
    printf("%d", Node->data);
    inOrder(Node-> right);
}
int main(){
    struct binary_tree *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(6);
    root -> left->left = createNode(2);
    root -> left -> right = createNode(4);
    // root -> left -> right->left = createNode(5);
    inOrder(root);
}