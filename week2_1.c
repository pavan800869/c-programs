// To take input of two workers and calculate total payment
#include <stdio.h>
struct worker{
    int id;
    int wage;
    char name[15];
}w1,w2;

int main(){
    struct worker;
    printf("Enter the worker 1 id, wage, and name: \n ");
    scanf("%d%d%s", &w1.id,&w1.wage,w1.name);
     printf("Enter the worker 2 id, wage, and name: \n ");
    scanf("%d%d%s", &w2.id,&w2.wage,w2.name);
    printf("The total payment is: %d", w1.wage + w2.wage);
    return 0;
    

}