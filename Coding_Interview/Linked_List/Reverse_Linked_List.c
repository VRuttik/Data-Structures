#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data; // Assign data to new node
    new_node->next = *head_ref; // Make next of new node as head
    *head_ref = new_node; // Move the head to point to the new node
}

// Function to reverse the linked list
void reverseLinkedList(struct Node** head_ref) {
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    // Traverse through the linked list
    while (current != NULL) {
        // Store next node
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    // Set the new head of the reversed list
    *head_ref = prev;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Main function
int main() {
    struct Node* head = NULL;
    int data;
    char choice;

    do {
        printf("Enter data for the node: ");
        scanf("%d", &data);
        insertAtBeginning(&head, data); // Insert elements into the linked list
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character
    } while (choice == 'y' || choice == 'Y');

    printf("Original linked list: ");
    printList(head);
    
    reverseLinkedList(&head); // Reverse the linked list

    printf("\nReversed linked list: ");
    printList(head);

    return 0;
}
