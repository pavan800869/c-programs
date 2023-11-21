#include <stdio.h>
#include <stdlib.h>
int search(int a[10],int beg,int end,int x){
    int mid;
    mid = (beg+end)/2;
    while(beg<=end){
        if(a[mid] < x){
            beg = mid+1;
            mid = (beg+end)/2;
        }
        else if(a[mid] == x){
            return mid;
        }
        else{
            end = mid+1;
            mid =(beg + end) / 2;
        }
    }
return -1;
}
int main(){
    int a[10],x;
    printf("Enter 10 elements in ascending order the array: ");
    for(int i=0; i<10 ; ++i){
    scanf("%d",&a[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d",&x);
    int result = search(a,0,9,x);
    (result == -1)? printf("Not found!"):printf("Element found at index:%d",result);
return 0;
}