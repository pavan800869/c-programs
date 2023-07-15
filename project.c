#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
//election management system
int check(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){
        return 1;
    }
    else{
        return 0;
    }
}
int main(int argc, char *argv[]) {
    int n, m;
    scanf("%d %d", &n, &m);
    int c;
    c = check();
    if (c){
        return 0;
    }
    else{
            return 1;
        }
    int votes[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &votes[i]);
    }
    int winner = 0;
    for (int i = 0; i < n; i++) {
        if (votes[i] > votes[winner]) {
            winner = i;
        }
    }
    printf("%d\n", winner + 1);
    return 0;
}