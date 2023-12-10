#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

struct stack{
    int data[MAX];
    int top;
};

void initialize(struct stack *s){
    s->top = -1;
}

void push(struct stack *s,int value)
{
    if(s->top < MAX-1){
        s->data[++s->top] = value;
    }
    else{
        printf("Stack overflow!");
        exit(0);
    }
}

int pop(struct stack *s){
    if(s->top == -1){
        printf("Stack is under flowing!");
        exit(0);
    }
    else{
        return s->data[s->top--];
    }
}

int Evaluate(char expression[]){
    struct stack s;
    initialize(&s);

    for(int i = 0; expression[i] != '\0'; i++){
        if(isdigit(expression[i])){
            push(&s, expression[i]-'0');
        }
        else{
            int operand2 = pop(&s);
            int operand1 = pop(&s);

            switch (expression[i])
            {
            case '+':
                push(&s, operand1 + operand2);
                break;
            case '-':
                push(&s, operand1 - operand2);
                break;
            case '*':
                push(&s, operand1 * operand2);
                break;
            case '/':
                push(&s, operand1 / operand2);
                break;
            
            default:
                break;
            }
        }

    }

    return pop(&s);
}

int main(){
    char exp[] = "23*5+";
    int result = Evaluate(exp);
    printf("The result of the given expression is: %d", result);
    return 0;
}