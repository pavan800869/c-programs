// WAP to display usage of quick sort 
#include <stdio.h>
void quicksort(int numbers[25],int first, int last){
    int i,j,pivot,temp;
    if(first < last){
        pivot = first;
        i = first;
        j = last;
        while(i<j){
            while(numbers[i]<=numbers[pivot]&&i<last)
                j++;
            while(numbers[i]>numbers[pivot])
                j--;
            if(i<j){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
        }
        }
    temp = numbers[pivot];
    numbers[pivot] = numbers[j];
    numbers[j] = temp;

    quicksort(numbers,first,j-1);
    quicksort(numbers,j+1,last);
    }
}
int main(){
    int i,count,numbers[25];
    printf("No.of elements:\n");
    scanf("%d",&count);
    printf("Enter the elements:\n");
    for(i=0;i<count;i++){
        scanf("%d",&numbers[i]);}
    quicksort(numbers,0,count-1);
    printf("Order of sorted elements is :\n");
    for(i=0;i<count;i++){
        printf("%d",numbers[i]);
    }
    return 0;
}