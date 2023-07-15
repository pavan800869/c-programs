//write a program on the queue operations
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void enqueue();
void dequeue();
void display();
int q[SIZE],front = -1,rear = -1,i;
void main(){
    int ch;
    while(1){
        printf("\n\tMENU");
        printf("\n\t1)Enqueue: ");
        printf("\n\t2)Dequeue: ");
        printf("\n\t3)Display Queue: ");
        printf("\n\t4)Exit\n");
        printf("Enter your choice.\n");
        scanf("%d",&ch);
        switch(ch){
            case 1 : enqueue(); break;
            case 2 : dequeue();break;
            case 3 : display();break;
            case 4 : exit(0);break;
            default: printf("wrong choice");
        }
    }
}
void enqueue(){
    int item;
    if(rear == SIZE - 1)
        printf("Queue is overflowing.");
    else{
        if(front == -1)
            front = 0;
        printf("Enter the element to be inserted: \n");
        scanf("%d", &item);
        rear = rear+1;
        q[rear] = item;
    }
}
void dequeue() {
    if (front==-1 || front > rear ){
        printf("Queue is underflowing:\n");
    }
    else{
        printf("Element deleted is : %d", q[front]);
        front = front+1;
    }
}
void display(){
    if (front == -1)
    printf("Queue is empty:");
    else{
        printf("Queue:\n");
        for(i=front;i<=rear;i++){
            printf("%d\n", q[i]);
        }
    }
}

