//Develop a program to calculate and print the sum and average of 'n' numbers using array to the pointer
#include <stdio.h>

int main(){
    int nums[100],n,i,sum;
    float avg;
    printf("How many elements:\n");
    scanf("%d",&n);
    printf("Enter the items:\n");
    for( i= 0 ; i< n ; ++i){
        scanf("%d",&nums[i]);
    }
    int *ptr = &nums[0];
    printf("Sum equal to:\n");
    for(i=0;i<n;i++){
        sum = sum+(*(ptr+i));
    }
    printf("%d",sum);
    avg=sum/n;
    printf("\nAverage is:%f\n",avg);
    return 0;
}