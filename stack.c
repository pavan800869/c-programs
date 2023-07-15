#include <stdio.h>
#include <stdlib.h>
#define SIZE 4 
int top = -1, stack[SIZE],i;
void push();
void pop();
void display();
int main(){
    int choice;
    while(1){
        printf("\n Perform operations on the stack:\n");
        printf("1) Push\n2) Pop\n3) Display\n 4) End");
        printf("\n\nEnter the choice: ");
       scanf("%d",&choice);
       switch(choice){
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
        display();
            break;
        case 4 : 
            exit(0);
        default:
        printf("\nInvalid Choice!");
            
       }
    }
return 0;
}
void push() {

     if (top == SIZE-1 )
         return ;
      else{ 
        ++top;
          printf("\n Enter element to be pushed in Stack:");
           scanf("%d", &stack[top]);
           }
   }
  void pop() {

      if (top==-1 ){
          printf("\n Underflow");
          }else{ 
          --top;
          printf("\n Element deleted is %d ",stack[top]);
          }
     }
void display(){

    for( i=top; i>=0;--i){
        printf("\t%d",stack[i] );
    }
    }