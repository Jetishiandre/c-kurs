#include <stdio.h>
#include <stdlib.h>

// Definition eines Knotens des binären Suchbaums
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Funktion zur Erstellung eines neuen Knotens
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Funktion zum Einfügen eines neuen Knotens in den Baum
struct Node* insert(struct Node* node, int data) {
    if (node == NULL) return newNode(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;
}

// Funktion zur Durchführung einer In-Order-Traversierung
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d -> ", root->data);
        inorder(root->right);
    }
}

// Funktion zum Finden des kleinsten Wertes in einem Baum
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Funktion zum Löschen eines Knotens im Baum
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Iterative Funktion zum Finden eines Knotens mit einem bestimmten Wert
struct Node* search(struct Node* root, int data) {
    struct Node* current = root;
    while (current != NULL) {
        if (current->data == data)
            return current;
        else if (current->data < data)
            current = current->right;
        else
            current = current->left;
    }
    return NULL;
}

// Hauptprogramm zur Demonstration der obigen Funktionen
void main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("In-Order-Traversierung des ursprünglichen Baums: ");
    inorder(root);
    printf("NULL\n");

    printf("Lösche 20\n");
    root = deleteNode(root, 20);
    printf("In-Order-Traversierung des modifizierten Baums: ");
    inorder(root);
    printf("NULL\n");

    printf("Lösche 30\n");
    root = deleteNode(root, 30);
    printf("In-Order-Traversierung des modifizierten Baums: ");
    inorder(root);
    printf("NULL\n");

    printf("Lösche 50\n");
    root = deleteNode(root, 50);
    printf("In-Order-Traversierung des modifizierten Baums: ");
    inorder(root);
    printf("NULL\n");

    struct Node* found = search(root, 60);
    if (found != NULL)
        printf("Knoten mit Wert 60 gefunden.\n");
    else
        printf("Knoten mit Wert 60 nicht gefunden.\n");

}
