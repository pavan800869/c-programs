#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node{
    int info;
    struct node *next;
};

struct node *start = NULL;
int main(){
    int choice;
    while(1){
        printf("\n   MENU  ");
        printf("\n 1. Create \n");
        printf("2. Display\n");
        printf("3. Insert at Beginning\n") ;
        printf("4. Insert at End\n" );
        printf("5. Insert in Position\n");
        printf("6. Delete from beginning\n");
        printf("7. Delete from the end \n");
        printf("8. Delete from specified position\n");
        printf("9. Exit ");
        printf("\n----------------------------------------");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: create(); break;
            case 2: display();break;
            case 3 : insert_begin(); break;
            case 4 :insert_end() ; break;
            case 5 : insert_pos(); break;
            case 6 :delete_begin(); break;
            case 7 :delete_end() ; break;
            case 8 :delete_pos(); break;
            case 9: exit (0) ; break;
            default: printf("Invalid input.\n") ; break;
        }

        }
        return 0;
    }

void create(){
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Out of memory space\n");
        exit(0);
    }
    printf("Enter the data value for the node: ");
    scanf("%d", &temp->info);
    temp ->next = NULL;
    if(start == NULL)
      start = temp;
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr-> next= temp;
    }
}
void display(){
    struct node *ptr;
    if(start == NULL){
        pirntf("List is empty");
        return;
 
    }
    else{
        ptr = start;
        printf("The List elements are");
        while (ptr!=NULL){
            printf("%d/t",ptr->info);
            ptr = ptr->next;
        }
        
        
    }
}