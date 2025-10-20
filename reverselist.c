#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int val;
  struct Node *next;
} Node;

typedef Node *NodePtr;

void inputlst(NodePtr hd);
void insert(NodePtr l, int val);
void printlst(NodePtr l);

void insert(NodePtr l, int val)
{
  while(l->next != NULL)
  {
    l = l->next;
  }

  NodePtr p = (NodePtr)malloc(sizeof(Node));
  if (p == NULL) {
      fprintf(stderr, "Error: Memory allocation failed.\n");
      return;
  }
  p->val = val;
  p->next = NULL;

  l->next = p;
}

void inputlst(NodePtr hd)
{
  int c;
  printf("Enter integers for the list (enter -1 to stop):\n");

  do
  {
    if (scanf("%d", &c) != 1) {
        printf("Invalid input. Stopping list entry.\n");
        break;
    }

    if (c != -1)
    {
        insert(hd, c);
    }
  } while(c != -1);
}

void printlst(NodePtr l)
{
  NodePtr current = l->next;

  printf("\n--- List Contents ---\n");
  if (current == NULL) {
      printf("The list is empty.\n");
      return;
  }

  while(current != NULL)
  {
    printf("%d\n", current->val);
    current = current->next;
  }
  printf("---------------------\n");
}

int main()
{
  NodePtr head = (NodePtr)malloc(sizeof(Node));
  if (head == NULL) {
      fprintf(stderr, "Error: Failed to allocate memory for the head node.\n");
      return 1;
  }
  head->val = 0;
  head->next = NULL;

  inputlst(head);

  printlst(head);

  NodePtr current = head;
  NodePtr next;
  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }

  return 0;
}
