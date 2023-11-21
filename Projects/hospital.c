#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
    int id;
    char name[20];
    struct node* next;
};

struct node* head = NULL;

void insert();
void display();
void delete ();
void insert_f();
void search(int key);

int main() {
    int ch, key;
    while (true) {
        printf("------------------------------------------------------------");
        printf("\n1.Insert\n2.Insert Front\n3.Display\n4.Delete\n5.Search\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                insert_f();
                break;
            case 3:
                display();
                break;
            case 4:
                delete();
                break;

            case 5:
                printf("Enter patient id to search:\n");
                scanf("%d", &key);
                search(key);
                break;

            case 6:
                exit(0);
                break;
            default:
                printf("Wrong choice!\n");
                break;
        }
    }
    return 0;
}

void insert() {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter patient id:\n");
    scanf("%d", &temp->id);
    printf("Enter patient name:\n");
    scanf(" %[^\n]%*c", temp->name);
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insert_f() {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter patient id:\n");
    scanf("%d", &temp->id);
    printf("Enter patient name:\n");
    scanf(" %[^\n]%*c", temp->name);
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void display() {
    struct node* ptr = head;

    if (head == NULL) {
        printf("There are no variables in the linked list!\n");
    } else {
        while (ptr != NULL) {
            printf("%d %s\n", ptr->id, ptr->name);
            ptr = ptr->next;
        }
    }
}

void delete() {
    struct node* ptr;
    struct node* prev = NULL;

    if (head == NULL) {
        printf("There are no variables in the linked list!\n");
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            prev = ptr;
            ptr = ptr->next;
        }

        if (prev != NULL) {
            prev->next = NULL;
            free(ptr);
        } else {
            free(head);
            head = NULL;
        }
    }
}

void search(int key){
    struct node *ptr;
    ptr = head;
    while(ptr->next != NULL){
        if (ptr->id == key){
            printf("Id: %d", ptr->id);
            printf("Name: %s", ptr->name);
            break;
        }
        else{
            ptr = ptr->next;
        }
    }
}