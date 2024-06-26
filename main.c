#include <stdio.h>
#include <stdlib.h>

// * Linked List
typedef struct Node {
  int data;
  struct Node *next;

} Node;

// Create a new newNode
Node *createNode(int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

// Insert a new node at the end of the list
void insert(Node **head, int value) {
  Node *newNode = createNode(value);
  if (*head == NULL) {
    *head = newNode;
    return;
  }

  Node *current = *head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
}

// Print the list
void printList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

// Free the list
void freeList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    Node *temp = current;
    current = current->next;
    free(temp);
  }

  head = NULL;
}

int main() {
  Node *head = NULL;

  insert(&head, 10);
  insert(&head, 20);
  insert(&head, 30);

  printf("Linked List: ");
  printList(head); // 10 -> 20 -> 30 -> NULL

  freeList(head);

  return 0;
}

/*
TIP: We use `&head` in the insert call `insert(&head, 10)` to pass the address
of the head pointer
TIP: By then using a double pointer `Node **head` in the
insert function, we can modify the head pointer itself rather than just the
value it points to. This allows us to update the head pointer with another
pointer `*newNode`
*/

// TIP: Use `cpace main.c` to run the code with auto compile
