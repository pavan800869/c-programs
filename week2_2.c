/*To read information of a student. It contains Name, roll num, birthday, admission date. 
Calculate age of student at the time of admission.*/
#include <stdio.h>
struct student
{
    char name[20];
    int roll_num;
    int dob;
};
struct adm
{
    int adm_date;
    struct student s1;
}ad;

int main(){
    printf("Enter sudent details:\n");
    scanf("%s%d%d%d",ad.s1.name,&ad.s1.roll_num,&ad.s1.dob,&ad.adm_date);
    //To calculate age of student at the time of addmission 
    int age=ad.s1.dob-ad.adm_date;
    printf("%s is %d years old\n",ad.s1.name,age);
    return 0;
}