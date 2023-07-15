#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//to declare the student structure
struct student{
   char name[20];
   int id;
   int marks;
};
struct dept{
    char dept_name[20];
    int dept_id;
    //to nest dept and student structures
    struct student s[3];
};
int main(){
    struct dept d[2];
    //to scan all the student and department details
    printf("Enter department and student details \n");
    for(int i =0; i<2;i++){
        printf("Department: %d\n",i+1);
        printf("department name: ");
        scanf("%s",d[i].dept_name);
        printf("department id: ");
        scanf("%d",&d[i].dept_id);
        for(int j =0;j<3;j++){
            printf("Student: %d\n",j+1);
            printf("Student name: ");
            scanf("%s",d[i].s[j].name);
            printf("Student id: ");
            scanf("%d",&d[i].s[j].id);
            printf("Student marks: ");
            scanf("%d",&d[i].s[j].marks);
                }
       }
    //to print all the details
    for(int i =0; i<2;i++){
        printf("Department: %d\n",i+1);
        printf("department name:");
        printf("%s\n",d[i].dept_name);
        printf("department id:");
        printf("%d\n",d[i].dept_id);
        for(int j =0;j<3;j++){
            printf("Student: %d\n",j+1);
            printf("Student name:");
            printf("%s\n",d[i].s[j].name);
            printf("Student id:");
            printf("%d\n",d[i].s[j].id);
            printf("Student marks:");
            printf("%d\n",d[i].s[j].marks);
        }
    }
    return 0;
}
