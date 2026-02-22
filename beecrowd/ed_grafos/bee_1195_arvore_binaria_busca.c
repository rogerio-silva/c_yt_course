#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node* insert(Node *root, int value) {
    if (root == NULL) {
        Node *newNode = (Node*) malloc(sizeof(Node));
        newNode->value = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

void pre_order(Node *root, int *first) {
    if (root == NULL) return;
    if (!(*first)) printf(" ");
    printf("%d", root->value);
    *first = 0;
    pre_order(root->left, first);
    pre_order(root->right, first);
}

void in_order(Node *root, int *first) {
    if (root == NULL) return;
    in_order(root->left, first);
    if (!(*first)) printf(" ");
    printf("%d", root->value);
    *first = 0;
    in_order(root->right, first);
}

void post_order(Node *root, int *first) {
    if (root == NULL) return;
    post_order(root->left, first);
    post_order(root->right, first);
    if (!(*first)) printf(" ");
    printf("%d", root->value);
    *first = 0;
}

void free_tree(Node *root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main() {
    int c;
    if (scanf("%d", &c) != 1) return 0;

    for (int i = 1; i <= c; i++) {
        int n;
        if (scanf("%d", &n) != 1) break;

        Node *root = NULL;
        for (int j = 0; j < n; j++) {
            int val;
            scanf("%d", &val);
            root = insert(root, val);
        }

        printf("Case %d:\n", i);
        
        int first;

    printf("Pre.: ");
    first = 1;
    pre_order(root, &first);
    printf("\n");

    printf("In..: ");
    first = 1;
    in_order(root, &first);
    printf("\n");

    printf("Post: ");
    first = 1;
    post_order(root, &first);
    printf("\n\n");

        free_tree(root);
    }

    return 0;
}
