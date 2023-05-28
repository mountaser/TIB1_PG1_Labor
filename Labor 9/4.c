#include <stdio.h>
#include <stdlib.h>

typedef struct numberItem {
    int value;
    struct numberItem *next;
} numberItem;

void appendNumberItem(numberItem **root, int value) {
    numberItem *current = *root;
    numberItem *newItem = (numberItem *)malloc(sizeof(numberItem));
    newItem->value = value;
    newItem->next = NULL;
    if (*root == NULL) {
        *root = newItem;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newItem;
    }
}

void printList(numberItem *root) {
    while (root != NULL) {
        printf("%d\n", root->value);
        root = root->next;
    }
}

void clearList(numberItem *root) {
    numberItem *current = root;
    numberItem *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    numberItem *root = NULL;
    appendNumberItem(&root, 42);
    appendNumberItem(&root, 1);
    appendNumberItem(&root, 2);
    appendNumberItem(&root, 3);
    printList(root);
    clearList(root);
    return 0;
}
