#include <stdio.h>
#include <stdlib.h>
void create();
void insert_beg();
void insert_end();
void display();
void delete_beg();
void delete_end();
struct node{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main(){
    int choice;
    while(1){
        printf("\n\tMAIN MENU");
        printf("\n 1-Create a linked list.");
        printf("\n 2-Insert at beginning of the Linked List.");
        printf("\n 3-Insert at end of the Linked List.");
        printf("\n 4-Display elements in the LinkedList."); 
        printf("\n 5-Delete from Beginning of the LinkedList.");
        printf("\n 6-Delete from Ending of the LinkedList.\n ");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: create(); break;
            case 2: insert_beg(); break;
            case 3: insert_end(); break;
            case 4: display(); break;
            case 5: delete_beg(); break;
            case 6: delete_end(); break;
            default: exit(0); break;
        }
    }
    return 0;
}
void create(){
    struct node *temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Out of memory space\n");
        exit(0);
    }
    printf("Enter the data value for node:\n");
    scanf("%d",&temp->info);
    temp->next = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void insert_beg(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Out of memory space\n");
        exit(0);
    }
    printf("Enter the data value for node:\n");
    scanf("%d",&temp->info);
    temp->next = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        temp->next = start;
        start = temp;
    }
}
void display(){
    struct node *ptr;
    if(start == NULL){
        printf("The list is empty.\n");
        exit(0);
    }
    else{
        ptr = start;
        printf("The list elements are: \n");
        while(ptr != NULL){
            printf("%d\t",ptr->info);
            ptr = ptr->next;
        }
    }
}
void insert_end(){
    struct node *temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Out of memory space\n");
        exit(0);
    }
    printf("Enter the data value for node:\n");
    scanf("%d",&temp->info);
    temp->next = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void delete_beg(){
    struct node *ptr;
    if(start == NULL){
        printf("The list is empty,\n");
        exit(0);
    }
    else{
        ptr = start;
        start = start->next;
        printf("The deleted element is: %d\n",ptr->info);
        free(ptr);
    }
}
void delete_end(){
    struct node *temp,*ptr;
    if(start == NULL){
        printf("The list is empty.\n");
        return ;
    }
    else if(start->next == NULL){
        ptr = start;
        start = NULL;
        printf("The deleted element is %d\n",ptr->info);
        free(ptr);
    }
    else{
        ptr = start;
        while(ptr->next != NULL){
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("The deleted element is %d\n",ptr->info);
        free(ptr);
    }
}