#include <stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter no.of rows:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            for(k=0;k<n-1;k++){
            printf("*");
            }
        }
        printf("\n");
    }
}