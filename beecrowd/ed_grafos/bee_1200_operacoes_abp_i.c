#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char value;
    struct Node *left;
    struct Node *right;
} Node;

Node* insert(Node *root, char value) {
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

int search(Node *root, char value) {
    if (root == NULL) return 0;
    if (root->value == value) return 1;
    if (value < root->value) return search(root->left, value);
    return search(root->right, value);
}

void pre_order(Node *root, int *first) {
    if (root == NULL) return;
    if (!(*first)) printf(" ");
    printf("%c", root->value);
    *first = 0;
    pre_order(root->left, first);
    pre_order(root->right, first);
}

void in_order(Node *root, int *first) {
    if (root == NULL) return;
    in_order(root->left, first);
    if (!(*first)) printf(" ");
    printf("%c", root->value);
    *first = 0;
    in_order(root->right, first);
}

void post_order(Node *root, int *first) {
    if (root == NULL) return;
    post_order(root->left, first);
    post_order(root->right, first);
    if (!(*first)) printf(" ");
    printf("%c", root->value);
    *first = 0;
}

void free_tree(Node *root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main() {
    char command[20];
    char val;
    Node *root = NULL;

    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "I") == 0) {
            scanf(" %c", &val);
            root = insert(root, val);
        } else if (strcmp(command, "INFIXA") == 0) {
            int first = 1;
            in_order(root, &first);
            printf("\n");
        } else if (strcmp(command, "PREFIXA") == 0) {
            int first = 1;
            pre_order(root, &first);
            printf("\n");
        } else if (strcmp(command, "POSFIXA") == 0) {
            int first = 1;
            post_order(root, &first);
            printf("\n");
        } else if (strcmp(command, "P") == 0) {
            scanf(" %c", &val);
            if (search(root, val)) {
                printf("%c existe\n", val);
            } else {
                printf("%c nao existe\n", val);
            }
        }
    }

    free_tree(root);
    return 0;
}
