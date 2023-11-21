#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top = -1, stack[SIZE];
void push();
void pop();
void display();
int main(){
    int choice;
    while(1){
        printf("\n\tSTACK operations\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice:\n\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0); break;
            default: printf("Incorrect choice"); break;
        }

    }
    return 0;
}
void push(){
    int x;
    if(top == SIZE-1){
        printf("Overflow");
        exit(0);
    }
    else{
        printf("Enter the element to be pushed:\n");
        scanf("%d",&x);
        ++top;
        stack[top] = x;
    }
}
void pop(){
    if(top == -1){
        printf("Underflow");
        exit(0);
    }
    else{
        printf("The element pushed is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("Underflow");
        exit(0);
    }
    else{
        for(int i = top;i>=0;--i){
            printf("%d\n",stack[i]);
        }
    }
}