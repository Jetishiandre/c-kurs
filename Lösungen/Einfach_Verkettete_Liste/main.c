#include <stdio.h>

#define MAX_NODES 100

// Definition eines Knotens der verketteten Liste
struct Node {
    int data;
    struct Node* next;
};

// Array von Knoten zur statischen Speicherzuweisung
struct Node nodes[MAX_NODES];
int node_count = 0;

// Funktion zum Hinzufügen eines neuen Knotens am Anfang der Liste
void push(struct Node** head_ref, int new_data) {
    if (node_count >= MAX_NODES) {
        printf("Keine weiteren Knoten verfügbar.\n");
        return;
    }

    // Initialisierung des neuen Knotens
    nodes[node_count].data = new_data;
    nodes[node_count].next = *head_ref;
    
    // Kopf-Zeiger auf den neuen Knoten setzen
    *head_ref = &nodes[node_count];
    
    // Erhöhen der Anzahl der verwendeten Knoten
    node_count++;
}

// Funktion zum Löschen eines Knotens mit einem bestimmten Wert
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // Falls das Kopf-Element gelöscht werden soll
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Kopf ändern
        printf("Knoten mit Wert %d gelöscht.\n", key);
        return;
    }

    // Suchen des Knotens, der gelöscht werden soll
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Falls der Knoten nicht gefunden wurde
    if (temp == NULL) {
        printf("Knoten mit Wert %d nicht gefunden.\n", key);
        return;
    }

    // Knoten aus der Liste entfernen
    prev->next = temp->next;
    printf("Knoten mit Wert %d gelöscht.\n", key);
}

// Funktion zum Drucken der Liste
void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

// Funktion zur Umkehrung der Liste
void reverse(struct Node** head_ref) {
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    *head_ref = prev;
}

// Hauptprogramm
void main() {
    struct Node* head = NULL;

    // Elemente zur Liste hinzufügen
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    // Liste ausdrucken
    printf("Liste: ");
    printList(head);

    // Knoten löschen
    deleteNode(&head, 3);
    deleteNode(&head, 1);

    // Liste nach dem Löschen ausdrucken
    printf("Liste nach dem Löschen: ");
    printList(head);

    // Liste umkehren
    reverse(&head);
    
    // Liste nach der Umkehrung ausdrucken
    printf("Liste nach der Umkehrung: ");
    printList(head);
}
