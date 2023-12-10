#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int precedence(char op)
{
    if(op == '+' || op == '-'){
        return 1;
    }
    else if(op == '*' || op == '/'){
        return 2;
    }
    return 0;
}

int isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void infix_postfix(char infix[], char postfix[]){
    char stack[MAX];
    int top=-1;
    int i,j = 0;
    for(i=0;infix[i] != '\0';i++){
        if(isdigit(infix[i])){
            postfix[j++] = infix[i];
        }
        else if(isOperator(infix[i])){
            while(top>=0 && precedence(stack[top]) >= precedence(infix[i])){
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
        else if(infix[i] == '('){
            stack[++top] = infix[i];
        }
        else if(infix[i] == ')'){
            while(top>=0 && stack[top] != '('){
                postfix[j++] = stack[top--];
            }
            top--;
        }
    }
while(top >= 0){
    postfix[j++] = stack[top--];
}
postfix[j] = '\0';
}

int main(){
    char infix[100], postfix[100];
    printf("Enter the infix expression:\n");
    scanf("%[^\n]c", infix);
    infix_postfix(infix, postfix);
    printf("The postfix expression generated is:\n");
    puts(postfix);

    return 0;
}
    
    
