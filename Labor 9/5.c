#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct customer {
  int num;
  char firstName[32];
  char lastName[32];
  struct customer *next;
};

struct customer* root = NULL;

struct customer* createCustomer(int num, char* firstName, char* lastName) {
  struct customer* newCustomer = (struct customer*)malloc(sizeof(struct customer));
  newCustomer->num = num;
  strcpy(newCustomer->firstName, firstName);
  strcpy(newCustomer->lastName, lastName);
  newCustomer->next = NULL;
  return newCustomer;
}

void insert(struct customer* newCustomer) {
  if(root == NULL || newCustomer->num < root->num) {
    newCustomer->next = root;
    root = newCustomer;
    return;
  }
  struct customer* current = root;
  while(current->next != NULL && current->next->num < newCustomer->num) {
    current = current->next;
  }
  newCustomer->next = current->next;
  current->next = newCustomer;
}

unsigned int customerCount() {
  unsigned int count = 0;
  struct customer* current = root;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}

void printList() {
  struct customer* current = root;
  while (current != NULL) {
    printf("%d: %s %s\n", current->num, current->firstName, current->lastName);
    current = current->next;
  }
}

void clearList() {
  struct customer* current = root;
  struct customer* next;
  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
  root = NULL;
}

int main(int argc, char* argv[]) {
  customer *root = NULL;
  root = createCustomer(1, "Hans", "Maurer");
  addCustomer(root, createCustomer(3, "Tatjana", "Roth"));
  addCustomer(root, createCustomer(2, "Anna-Maria", "Schmidt"));
  printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
  printList(root);
  clearList(root);
  root = NULL;

  printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
  printList(root);
  return 0;
}
