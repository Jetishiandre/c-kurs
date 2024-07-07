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

// Funktion zum Drucken der Liste
void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
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
    printList(head);
}
