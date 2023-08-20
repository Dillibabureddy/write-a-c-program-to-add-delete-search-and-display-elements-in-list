#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void insert_at_beginning(struct node **head, int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: Unable to allocate memory.\n");
    return;
  }

  new_node->data = data;
  new_node->next = *head;
  *head = new_node;
}

int main() {
  struct node *head = NULL;

  insert_at_beginning(&head, 10);
  insert_at_beginning(&head, 20);
  insert_at_beginning(&head, 30);

  printf("The linked list is: ");
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");

  return 0;
}
