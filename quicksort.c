#include <stdio.h>
#include <stdlib.h>
void quicksort(int number[25],int first,int last){
    int i,j,temp,pivot;
    if(first<last){
        pivot = first;
        i = first;
        j = last;
        while(i<j){
            while(number[i]<+number[pivot] && i<last)
                j++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                temp = number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;

        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}
int main(){
    int arr[]={10,7,8,9,1,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting:\n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("\nAfter sorting:\n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
return 0;
}
