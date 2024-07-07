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
    // Falls der Baum leer ist, wird ein neuer Knoten zurückgegeben
    if (node == NULL) return newNode(data);

    // Ansonsten durchläuft den Baum rekursiv
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    // Rückgabe des (unveränderten) Knotenszeigers
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

    // Schleife zum Finden des linken Blattes (minimales Element)
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Funktion zum Löschen eines Knotens im Baum
struct Node* deleteNode(struct Node* root, int data) {
    // Basisfall
    if (root == NULL) return root;

    // Falls der zu löschende Wert kleiner als der Wurzelwert ist, 
    // befindet er sich im linken Teilbaum
    if (data < root->data)
        root->left = deleteNode(root->left, data);

    // Falls der zu löschende Wert größer als der Wurzelwert ist, 
    // befindet er sich im rechten Teilbaum
    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    // Falls der Wert derselbe wie der Wurzelwert ist, dann wird dieser Knoten gelöscht
    else {
        // Knoten mit nur einem Kind oder keinem Kind
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Knoten mit zwei Kindern: Erhalte den In-Order-Nachfolger (kleinster im rechten Teilbaum)
        struct Node* temp = minValueNode(root->right);

        // Kopiere den In-Order-Nachfolgerinhalt in diesen Knoten
        root->data = temp->data;

        // Lösche den In-Order-Nachfolger
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
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
}
