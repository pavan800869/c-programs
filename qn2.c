//write a c program to pass an array of structure as an argument to the function
#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};
void display(struct student s[])
{
    //printing for details
    for(int i = 0;i<3;i++){
        printf("Roll no: %d\n",s[i].rollno);    
        printf("Name :%s \tMarks:%.2f\n",s[i].name,s[i].marks);
    }
}
int main(){
    
    struct student stu[3];
    printf("Enter the student details:\n");
    for (int i = 0 ;i<3;++i){
       printf("Enter student rollno:\n");
       scanf("%d",&stu[i].rollno);
       printf("Enter the name of the student:\n");
       scanf("%s",stu[i].name);
       printf("Enter his/her marks:\n");
       scanf("%f",&stu[i].marks);
    }
display(stu);
return 0;
}