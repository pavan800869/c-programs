//To create and use files using fopen and fputc functions

#include <stdio.h>
int main(){
    int i;
    FILE *fptr;
    char fn[50];
    char str[] = ("Our students rocks\n");

    fptr = fopen("fputc_test.txt","w");
    for(i=0;str[i] != '\n';i++){
        fputc(str[i],fptr);
    }
    fclose(fptr);
    fopen("fputc_text.txt","r");
    for(i=0;str[i] != '\0';i++){
        printf("%c",str[i]);
    }
fclose(fptr);
return 0;
}
