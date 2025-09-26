#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void Reverse(struct node **head);

int main(){
    struct node *head=NULL, *newNode, *temp;
    int choice = 1;

    while(choice){
        newNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter Data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if(head == NULL){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        printf("Want to add more? (0/1): ");
        scanf("%d", &choice);
    }

    Reverse(&head);  
    return 0;
}

void Reverse(struct node **head){
    struct node *temp, *prev = NULL, *Upcoming;

    temp = *head;
    while(temp != NULL){
        Upcoming = temp->next;
        temp->next = prev;
        prev = temp;
        temp = Upcoming;
    }
    *head = prev;

    temp = *head;
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}