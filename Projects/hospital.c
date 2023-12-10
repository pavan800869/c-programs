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
void delete_selected();
void insert_f();
void search(int key);

int main() {
    int ch, key;
    while (true) {
        printf("------------------------------------------------------------");
        printf("\n1.Patient registration\n2.Add patient\n3.Display patient records\n4.Delete the patient record\n5.Search for patient record\n6.Exit\n");
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
                delete_selected();
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

void delete_selected() {
    int target_id;
    printf("Enter the ID of the node to delete: ");
    scanf("%d", &target_id);

    struct node* ptr = head;
    struct node* prev = NULL;

    while (ptr != NULL && ptr->id != target_id) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Node with ID %d not found!\n", target_id);
        return;
    }

    if (prev != NULL) {
        prev->next = ptr->next;
    } else {
        head = ptr->next;
    }

    free(ptr);
    printf("Node with ID %d deleted successfully!\n", target_id);
}

void search(int key){
    struct node *ptr;
    ptr = head;
    while(ptr->next != NULL){
        if (ptr->id == key){
            printf("\nId: %d", ptr->id);
            printf("Name: %s", ptr->name);
            break;
        }
        else{
            ptr = ptr->next;
        }
    }
}