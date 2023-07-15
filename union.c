#include <stdio.h>
union abc{
    int a;
    char b;

};
int main(){
    union abc var;
    union abc *ptr;
    var.a = 90;
    var.b = 'Q';
    ptr = &var;
    printf("The value of a = %d", ptr->a);
    printf("The value of b = %c", ptr->b);
    return 0;

}