#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customer {
  int num;
  char firstName[20];
  char lastName[20];
  struct customer *next;
} customer;

customer* createCustomer(int num, char* firstName, char* lastName) {
  customer* newCustomer = (customer*) malloc(sizeof(customer));
  newCustomer->num = num;
  strcpy(newCustomer->firstName, firstName);
  strcpy(newCustomer->lastName, lastName);
  newCustomer->next = NULL;
  return newCustomer;
}

void addCustomer(customer* root, customer* newCustomer) {
  customer* current = root;
  customer* prev = NULL;
  while (current != NULL && current->num < newCustomer->num) {
    prev = current;
    current = current->next;
  }
  if (prev == NULL) {
    newCustomer->next = root;
    root = newCustomer;
  } else {
    prev->next = newCustomer;
    newCustomer->next = current;
  }
}

void printList(customer* root) {
  customer* current = root;
  while (current != NULL) {
    printf("%d: %s %s\n", current->num, current->firstName, current->lastName);
    current = current->next;
  }
}

 int customerCount(customer* root) {
  int count = 0;
  customer* current = root;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}

void clearList(customer* root) {
  customer* current = root;
  customer* next;
  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
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

