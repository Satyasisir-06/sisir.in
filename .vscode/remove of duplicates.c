#include <stdio.h>
#include <stdlib.h>

// Definition of a linked list node
struct Node {
    int data;
    struct Node* next;
};
// Function to insert a node at the end
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
    return head;
}

// Function to remove duplicates from an unsorted linked list
void removeDuplicates(struct Node* head) {
    struct Node *current = head, *prev, *temp;
    
    while (current != NULL && current->next != NULL) {
        prev = current;
        temp = current->next;
        
        while (temp != NULL) {
            if (current->data == temp->data) {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    
    // Insert elements
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 10);
    head = insert(head, 30);
    head = insert(head, 20);
    head = insert(head, 40);
    
    printf("Original List:\n");
    printList(head);
    
    removeDuplicates(head);
    
    printf("List after removing duplicates:\n");
    printList(head);
    
    return 0;
}