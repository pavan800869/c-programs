#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int rear = -1,front = 0,queue[SIZE];
void enqueue();
void dequeue();
void display();
int main(){
    int choice;
    while(1){
        printf("\n\t\tQUEUE OPERATIONS");   
        printf("\n----------------------------------------\n");
        printf("1.Enqeue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: enqueue();break;
            case 2: dequeue(); break;
            case 3:display(); break;
            case 4: exit(0);break;
            default:printf("Incorrect choice\n"); break;

        }
    }
    return 0;
}
void enqueue(){
    int x;
    if(rear == SIZE-1){
        printf("Overflow");
        exit(0);
    }
    else{
        printf("Enter the item to be inserted:\n");
        scanf("%d",&x);
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 || front>rear){
        printf("Underflow");
        exit(0);
    }
    else{
        printf("The dequeued element is %d.",queue[front]);
        front++;
    }
}
void display() {
    if(front>rear){
        printf("Underflow");
        exit(0);
    }
    else{
        for(int i=front;i<rear;i++){
            printf("%d\t",queue[i]);
        }
    }
}