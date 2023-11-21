//structure having student roll no, name, marks. And array of 20 students 
//Has a menu to print, search(roll no), search(marks) and exit the program
#include <stdio.h>
#include <stdlib.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};

void print_roll( struct student s[20],int n){
   
    printf("The student with the roll no is:\n");
    printf("Name:%s\n",s[n].name);
    printf("Roll no:%d\n",s[n].rollno);
    printf("Marks:%f",s[n].marks);
}

void search_roll(struct student s[20]){
    int r;
    printf("\tSearch by roll no: ");
    scanf("%d",&r);
    for(int i=0;i<20;i++){
        if(s[i].rollno == r)
            print_roll(s,r);
        else{
            printf("Not found");
            break;
        }
    }

}

void std_details(struct student s[20]){
    for(int i = 0;i<20;i++){
    printf("The student with the roll no is:\n");
    printf("Name:%s\n",s[i].name);
    printf("Roll no:%d\n",s[i].rollno);
    printf("Marks:%f\n",s[i].marks);
    
    }
}
void std_max(struct student s[20]){
    float max;
    
    for(int i=0;i<20;i++){

        if(s[i].marks > 95)
        {
            printf("Name:%s\n",s[i].name);
    }
    }
}
int main(){
    int choice;
    struct student s[20];
    for (int i = 0; i<20; i++){
        printf("Enter details of Student %d:\n",i+1);
        scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
    }
    while(1){
        
        printf("1. Search student by roll no\n2.Print all the student details\n3.Print students with highest marks\n4.Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: search_roll(s); break;
            case 2: std_max(s); break;
            case 3: std_details(s); break;
            case 4: exit(0); break;
            default: printf("Incorrect choice.\n"); break;
            
        }
    }
}
