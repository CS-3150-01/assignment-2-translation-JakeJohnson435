#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node{
    int data;
    struct Node* next;

};

struct Node *head = NULL;
struct Node *current = NULL;

void addNode(struct Node** head, int data);
void showNodes(struct Node* node);

int main() {
    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 4);

    showNodes(head);

    return 0;
}

void addNode(struct Node** head, int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
};

void showNodes(struct Node* node){
    printf("/nYour linked list is:");

    while (node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
    
    printf("\n");
};