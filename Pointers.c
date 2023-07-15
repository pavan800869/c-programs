/*WAP to assign 5 values and print their addresses values and stored number values*/


#include <stdio.h>
int main(){
    int arr[5] = {3, 5, 7, 9, 11};
    printf("arr:%u, Value:%d\n",arr,*arr);
    printf("&arr:%u, Value:%d\n",&arr,*(arr));
    printf("&arr[0]:%u, Value:%d\n",&arr[1],*(&arr[1]));
return 0;
}