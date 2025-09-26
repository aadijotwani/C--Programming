#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *head);

int main(){

    struct node *head = NULL, *newNode, *temp;
    int choice = 1;

    while(choice){
        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

        printf("(0/1): ");
        scanf("%d", &choice);
    }

    display(head);

    return 0;
}

void display(struct node *head){
    struct node *temp;

    temp = head;
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        if(temp->next == NULL)
            break;
        temp = temp->next;
    }
    printf("NULL\n\n");

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
}