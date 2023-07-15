#include <stdio.h>

struct person{
    char name[20];
    int age;
    int dob;
};
struct employee{
    struct person p; 
    int empid;
    float empsal;

};
int main(){
    struct employee e[3];
    int i;
    printf("Enter the employee details.\n");
    for(i=0;i<3;i++){
        printf("Enter Employee Name: ");
        scanf("%s",e[i].p.name);
        printf("\nEnter Employee Age: ");
        scanf("%d",&e[i].p.age);
        printf("\nEnter Date Of Birth: ");
        scanf("%d",&e[i].p.dob);
        printf("Enter Employee id: ");
        scanf("%d",&e[i].empid);
        printf("Enter Employee salary: ");
        scanf("%f",&e[i].empsal);
    }
    //display the entered details
    for(i=0;i<3;i++){
        printf("\nEmployee Details\n");
        printf("Name:%s",e[i].p.name);
        printf("\nAge:%d",e[i].p.age);
        printf("\nDate of birth:%d",e[i].p.dob);
        printf("\nEmployee ID:%d",e[i].empid);
        printf("\nSalary:%f",e[i].empsal);
        }
    return 0;
}