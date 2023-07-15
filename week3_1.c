/*To read records of three different students in structure having members name, roll num, marks then display it  */
#include <stdio.h>
struct student{
    char name[20];
    int roll_num;
    int marks;
};
int main(){
    struct student st[3];
    printf("Enter the details of the students:\n");
    for(int i=0;i<3;i++){
        printf("\nEnter name of student %d: ",i+1);
        scanf("%s",st[i].name);
        printf("\nEnter roll number of student %d: ",i+1);
        scanf("%d",&st[i].roll_num);
        printf("\nEnter marks of student %d: ",i+1);
        scanf("%d",&st[i].marks);
}
printf("\nThe list of students:\n");
for(int i=0;i<3;i++){
    printf("\nName: %s\nRoll number: %d\nMarks: %d",st[i].name,st[i].roll_num,st[i].marks);
}
return 0;
}